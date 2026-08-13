class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int len = 0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){

           mp[nums[i]]++;
           while(mp[nums[i]] > k){
             mp[nums[left]]--;
             left++;
           } 
           len = max(len,i-left+1);
           
        }
        return len;
    }
};