class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>mp;
        int len = 0;
        int start =0 ;
        for(int move=0;move<s.size();move++){
            mp[s[move]]++;
            while(mp[s[move]] > 2){
              mp[s[start]]--;
              start++;
            }
            len = max(len,move-start+1);
        }
        return len;
    }
};