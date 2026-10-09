class Solution {
public:
    int minInsertions(string s) {
        int count = 0;
        int ans = 0;
        int n = s.size();
        int i = 0;

        while (i < n) {
            if (s[i] == '(') {
                count++;
                i++;
            } else {
              
                if (i + 1 < n && s[i + 1] == ')') {
                    i += 2;
                } else {
                   
                    ans++;
                    i++;
                }

                if (count > 0) {
                    count--;
                } else {
                   
                    ans++;
                }
            }
        }

        return ans + count * 2;
    }
};


