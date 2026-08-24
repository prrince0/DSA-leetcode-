class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int leftsum = 0;
        int rightsum = 0;
        int leftqucount = 0;
        int rightqucount = 0;
        for (int i = 0; i < n; i++) {
            if (num[i] == '?') {
                if (i < n / 2) {
                    leftqucount++;
                } else {
                    rightqucount++;
                }
            } else {
                if (i < n / 2) {
                    leftsum += num[i] - '0';
                } else {
                    rightsum += num[i] - '0';
                }
            }
        }
        int totalqucount = leftqucount + rightqucount;
        if (totalqucount % 2 == 1) {
            return true;
        }
        int left = 2 * leftsum + 9 * leftqucount;
        int right = 2 * rightsum + 9 * rightqucount;
        if (left == right) {
            return false;
        }
        else{
            return true;
        }
        
    }
   
};