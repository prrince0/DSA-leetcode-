class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int nines = sum / 9;
        int remain = sum % 9;
        if(sum > num*9){
            return "";
        }

        string ans(nines,'9');
        if(remain > 0){
          ans.push_back('0'+remain);
        }
        ans.append(num - ans.size(),'0');
        return ans;
        
    }
};