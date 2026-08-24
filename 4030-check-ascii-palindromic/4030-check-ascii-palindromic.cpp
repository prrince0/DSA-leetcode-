class Solution {
public:
    bool isPalindromic(string s) {
       int n = s.size();
        string result ="";
        for(char ch:s){
            int asci = (int)ch;
            for(int i=7;i>=0;i--){
                result += ((asci >> i) & 1)+'0';
            }
        }
        int left = 0;
        int right = result.size()-1;
        while(left <= right){
            if(result[left] != result[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};