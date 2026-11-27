class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        vector<int>indices;

        for(int i = 0; i < n; i++){
          pq.push({nums[i], i});
        }

        while(k > 0){
           int index = pq.top().second;
            pq.pop();
            indices.push_back(index);
            k--;
        }

         sort(indices.begin(), indices.end());
        for(int x: indices){
            ans.push_back(nums[x]);
        }
        return ans;
    }
};