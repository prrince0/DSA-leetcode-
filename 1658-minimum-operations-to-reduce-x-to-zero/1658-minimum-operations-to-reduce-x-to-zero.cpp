class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        unordered_map<int, int> mp;
        int sum = 0;
        int len = INT_MIN;

        mp[0] = -1;

       
        for (int idx = 0; idx < nums.size(); idx++) {
            sum += nums[idx];
            mp[sum] = idx;
        }
         if(sum < x){
            return -1;
         }
        int neededsum = sum - x;

        if (neededsum < 0) {
            return -1;
        }

        sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            int remainsum = sum - neededsum;

            if (mp.find(remainsum) != mp.end()) {
                len = max(len, i - mp[remainsum]);
            }
        }

        if (len == INT_MIN) {
            return -1;
        }

        return nums.size() - len;
    }
};