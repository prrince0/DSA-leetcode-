class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
       int n = nums.size();
       vector<int>num1;
       vector<int>num2;
      int last1 = nums[0];
      int last2 = nums[1];
      num1.push_back(last1);
      num2.push_back(last2);
      for(int i=2;i<n;i++){
        if(last1 > last2){
            num1.push_back(nums[i]);
            last1=nums[i];
        }
        else{
            num2.push_back(nums[i]);
            last2 = nums[i];
        }

      }
     vector<int> result = num1;

    result.insert(result.end(), num2.begin(), num2.end());
    return result;
    }
};