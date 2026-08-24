class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
         unordered_set<int>st;
        for(int x: nums){
            st.insert(x);
        }
        vector<vector<int>>ans;
        int i=lower;
        while(i <= upper){
            if(st.find(i) == st.end()){
                int start =i;
                while(i<= upper && st.find(i) == st.end()){
                    i++;
                }
                ans.push_back({start,i-1});
            }
            else{
                i++;
            }
        }
        return ans;
    }
};