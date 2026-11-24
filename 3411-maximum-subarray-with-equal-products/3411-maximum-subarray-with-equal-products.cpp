class Solution {
public:
    int maxLength(vector<int>& nums) {
        int count = 0;
        for(int right =0;right < nums.size();right++){
            int product = nums[right];
            int gcdv =  nums[right];
            int lcmv= nums[right];
            for(int j=right+1;j<nums.size();j++){
                product = product*nums[j];
                gcdv = gcd(gcdv,nums[j]);
                lcmv= lcm(lcmv,nums[j]);
                if(product > gcdv*lcmv){
                    break;
                }
                if(product == gcdv*lcmv){
                    count = max(count,j-right+1);
                }
            }
        }
        return count;
    }
};