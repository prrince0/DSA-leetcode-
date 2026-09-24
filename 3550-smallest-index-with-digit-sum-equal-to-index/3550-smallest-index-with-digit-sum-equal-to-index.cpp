class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum =0;
            int temp = nums[i];
            while(temp > 0){
                sum += temp%10;
                temp=temp/10;
            }
            if(sum == i){
                ans = min(ans,i);
            }
        }
        if(ans ==INT_MAX) return -1;
        return ans;
    }
};