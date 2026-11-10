class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        int n = nums.size();
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }

       int count = 0;
       while(count+1 < k){
        pq.pop();
        count++;
       } 
       return pq.top();

    }
};