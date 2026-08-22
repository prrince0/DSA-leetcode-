class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        long long product = 1;
        int temp = n;
        while(temp > 0){
            int digit = temp % 10;
            sum += digit;
            product *= digit;
            temp = temp/10;
        }
        long long result = sum + product;
        if(n % result == 0) return true;
        return false;
    }
};