class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int len = 0;
        int zero = 0;
        int one = 0;
        int start = 0;

        for (int move = 0; move < nums.size(); move++) {

            if (nums[move] == 0) {
                zero++;
            } else {
                one++;
            }
            while (zero > k) {
                if (nums[start] == 0) {
                    zero--;
                } else {
                    one--;
                }
                start++;
            }
            len = max(len,move-start+1);
        }
        return len;
    }
};