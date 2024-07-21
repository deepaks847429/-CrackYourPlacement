
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        // Create vectors to track rows and columns that need to be zeroed
        vector<int> rows(m, 0);
        vector<int> cols(n, 0);

        // First pass: mark the rows and columns that need to be zeroed
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] == 0) {
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }

        // Second pass: update the matrix based on marked rows and columns
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (rows[i] == 1 || cols[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};