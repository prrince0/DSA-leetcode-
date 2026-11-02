class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
       sort(nums.begin(),nums.end());
       int mid = n/2;
       int middle = nums[mid];
       int ans = 0;
       for(int x:nums){
        ans += (abs(middle - x));
       }
       return ans;
    }
};