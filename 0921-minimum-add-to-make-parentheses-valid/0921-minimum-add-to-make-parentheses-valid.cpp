class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>st;
       // int n = s.size();
        int count = 0;
        int open =0;
        for(char ch:s){
            if(ch == '('){
                st.push(ch);
                open++;
            }
            else{
               if(!st.empty()){
                st.pop();
                open--;
               }
               else if(st.empty()){
                count++;
               }

            }
        }
      return count+open;
    }
};