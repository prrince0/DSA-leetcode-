class Solution {
public:
    int n;
    int maxLen = 0;
    unordered_set<string> st;

    void solve(string& s, int i, string& curr, int count) {

        if (count < 0)
            return;

        if (i == n) {
            if (count == 0) {
                if (curr.size() > maxLen) {
                    maxLen = curr.size();
                    st.clear();
                }

                if (curr.size() == maxLen) {
                    st.insert(curr);
                }
            }
            return;
        }

        
        curr.push_back(s[i]);

        if (s[i] == '(')
            solve(s, i + 1, curr, count + 1);
        else if (s[i] == ')')
            solve(s, i + 1, curr, count - 1);
        else
            solve(s, i + 1, curr, count);

        curr.pop_back();

        
        if (s[i] == '(' || s[i] == ')') {
            solve(s, i + 1, curr, count);
        }
    }

    vector<string> removeInvalidParentheses(string s) {
        n = s.size();
        maxLen = 0;
        st.clear();

        string curr = "";
        solve(s, 0, curr, 0);

        return vector<string>(st.begin(), st.end());
    }
};