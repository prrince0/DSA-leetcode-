class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int length = 1;
        int longest = 1;

        if(arr.size() == 0) return 0;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1]) {
                continue; 
            }

            if (arr[i] - arr[i - 1] == 1) {
                length++;
            } else {
                length = 1;
            }

            longest = max(longest, length);
        }
        return longest;
    }
};
