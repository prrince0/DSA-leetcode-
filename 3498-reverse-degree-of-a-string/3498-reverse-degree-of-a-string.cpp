class Solution {
public:
    int reverseDegree(string s) {

        int sum = 0;
        int pos  = 1;
        for (char ch : s) {
            int reversed = 'z'-ch+1;
            int product = reversed * pos;

            sum += product;
            pos++;
        }
        return sum;
    }
};