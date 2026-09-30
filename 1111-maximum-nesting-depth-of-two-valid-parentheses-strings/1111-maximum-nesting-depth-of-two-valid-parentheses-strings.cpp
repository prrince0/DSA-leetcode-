class Solution {
public:
    vector<int> maxDepthAfterSplit(string s) {
        int n = s.size();
        vector<int> order(n);
        int depth = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '('){

               depth++;
                order[i]=depth%2;
            }
            else{
                
                order[i] = depth%2;
                depth--;
            }
        }

        return order;
    }
};