class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int start = 0;
        int count = 0;
        unordered_map<int, int> mp;

        for (int move = 0; move < n; move++) {
            mp[fruits[move]]++;

            while (mp.size() > 2) {
                mp[fruits[start]]--;
           
                if(mp[fruits[start]] == 0){
                    mp.erase(fruits[start]);
                }
                    start++;
            }
            count = max(count,move-start+1);
        }
        return count;
    }
};