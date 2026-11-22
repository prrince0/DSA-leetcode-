class Solution {
public:
    bool checkString(string s) {
        bool find = false;
        int n = s.size();
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == 'a') {
                find = true;
            }
            if (find == true && s[i] == 'b') {
                return false;
            }
        }
        return true;
    }
};