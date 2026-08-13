class Solution {
public:
    int smallestNumber(int n, int t) {
        for (int x = n; x <= n + 10; x++) {
            int product = 1;
            int temp = x;
            while (temp > 0) {
                int digit = temp % 10;
                product *= digit;
                temp = temp / 10;
            }
            if (product % t == 0) {
                return x;
            }
        }
        return 0;
    }
};