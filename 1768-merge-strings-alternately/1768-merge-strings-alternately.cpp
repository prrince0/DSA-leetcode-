class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string ans = "";
       int i=0;
       
       int n = word1.size();
       int m = word2.size();
       while(i < n || i<m){
           if (i < n) {
                ans += word1[i];
            }
            if (i <m) {
                ans += word2[i];
            }
            i++;
       } 
       return ans;
    }
};