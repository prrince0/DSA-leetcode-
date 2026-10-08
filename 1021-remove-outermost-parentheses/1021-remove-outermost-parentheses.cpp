class Solution {
public:
    string removeOuterParentheses(string s) 
    {
       int count = 0;
       string ans = "";
       int n = s.length();
       for(int i = 0; i<n;i++)
       {
         if(s[i] == '(')
         {
            if(count > 0){
                ans+='('; 
            }
                count++;
         }
            if(s[i] == ')')
            {
              if(count > 1){
                ans += ')';
              }
                count--;
            }
       }
       return ans; 
    }
};