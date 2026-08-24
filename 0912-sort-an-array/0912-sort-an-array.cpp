class Solution {
public:
    void merge(vector<int>& a, int l, int m, int r) {
        vector<int> temp;
        int i = l, j = m + 1;

        while (i <= m && j <= r) {
            if (a[i] < a[j]) temp.push_back(a[i++]);
            else temp.push_back(a[j++]);
        }

        while (i <= m) temp.push_back(a[i++]);
        while (j <= r) temp.push_back(a[j++]);

        for (int k = 0; k < temp.size(); k++)
            a[l + k] = temp[k];
    }

    void mergeSort(vector<int>& a, int l, int r) {
        if (l >= r) return;

        int m = l + (r - l) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};