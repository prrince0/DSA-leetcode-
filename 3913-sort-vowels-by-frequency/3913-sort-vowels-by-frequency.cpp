class Solution {
public:
    string sortVowels(string s) {
        unordered_map<char, pair<int, int>> mp;

        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {

                mp[ch].first++;

                if (mp[ch].first == 1)
                    mp[ch].second = i;
            }
        }

        vector<pair<char, pair<int, int>>> v(mp.begin(), mp.end());

        sort(v.begin(), v.end(), [](auto& a, auto& b) {

            if (a.second.first != b.second.first)
                return a.second.first > b.second.first;

            return a.second.second < b.second.second;
        });

        stack<pair<char, int>> st;

        for (int i = v.size() - 1; i >= 0; i--) {
            st.push({v[i].first, v[i].second.first});
        }

        string ans = "";

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {

                auto p = st.top();
                st.pop();

                ans += p.first;

                p.second--;

                if (p.second > 0)
                    st.push(p);

            } else {
                ans += s[i];
            }
        }

        return ans;
    }
};