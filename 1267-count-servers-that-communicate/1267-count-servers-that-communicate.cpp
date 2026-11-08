class Solution {
public:
    int countServers(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        int count = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(grid[i][j] == 1) {

                    int rowCount = 0;
                    int colCount = 0;

                    // Check same row
                    for(int k = 0; k < n; k++) {
                        if(grid[i][k] == 1) {
                            rowCount++;
                        }
                    }

                    // Check same column
                    for(int k = 0; k < m; k++) {
                        if(grid[k][j] == 1) {
                            colCount++;
                        }
                    }

                    if(rowCount > 1 || colCount > 1) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};