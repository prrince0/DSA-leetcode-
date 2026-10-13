class Solution {
public:
    int hammingWeight(int n) {
        string bits = "";

        while(n > 0){
            bits += char('0'+n%2);
            n =n/2;
        }
       // reverse(nums.begin(),nums.end());
        int count = 0;
        for(char ch : bits){
            if(ch == '1') count++;
        }
        return count;
    }
};