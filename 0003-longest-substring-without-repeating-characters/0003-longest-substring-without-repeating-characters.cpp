class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int>mp;
       int len = 0;
       int left = 0;

       for(int move =0;move< s.size();move++){
          
          mp[s[move]]++;
          while(mp[s[move]] > 1){
            mp[s[left]] --;
            left ++;
          }
         len = max(len , move -left+1);
       }
       return len;
    }
};