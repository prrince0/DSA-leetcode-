class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 1;
        int k = 2;
        int count = 0;

        while (k < n) {

            if (nums[j] == nums[i]) {
                j++;
                k++;
                continue;
            }

            while (k < n && nums[k] == nums[j]) {
                k++;
            }

            if (k >= n)
                break;

            if (nums[j] > nums[i] && nums[j] > nums[k]) {
                count++;
            }

            else if (nums[j] < nums[i] && nums[j] < nums[k]) {
                count++;
            }

            i = j;
            j = k;
            k++;
        }

        return count;
    }
};