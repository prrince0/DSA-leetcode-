class Solution {
public:
    bool canAliceWin(int n) {
       int req = 10;
       int run = 0;
       while(n >= req){
        n = n-req;
        req--;
        run++;
       }
       if(run % 2 == 1){
        return true;
       }
     return false;
    }
};