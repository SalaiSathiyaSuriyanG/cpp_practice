
/* ================================== LeetCode Version ======================================

- Time Complexity: O(m*n log(m*n)) 
- Space Complexity: O(m*n) 

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> result;

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                result.push_back({i, j});
            }
        }

        // Sorts the result based on the lambda func
        sort(result.begin(), result.end(), 
            [&] (auto& a, auto& b){   // Custom lambda func
                return abs(rCenter - a[0]) + abs(cCenter - a[1]) < 
                       abs(rCenter - b[0]) + abs(cCenter - b[1]);
            }
        );

        return result;
    }
};
========================================================================================== */

// ================================== Runnable Version ======================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> result;

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                result.push_back({i, j});
            }
        }

        // Sorts the result based on the lambda func
        sort(result.begin(), result.end(), 
            [&] (auto& a, auto& b){   // Custom lambda func
                return abs(rCenter - a[0]) + abs(cCenter - a[1]) < 
                       abs(rCenter - b[0]) + abs(cCenter - b[1]);
            }
        );

        return result;
    }
};

int main(){
    Solution sol;
    int rows, cols, r, c;
    cout <<"Enter the number of rows and columns :\n";
    cin >> rows >> cols;

    cout <<"Enter the row and column of the center :\n";
    cin >> r >> c;

    vector<vector<int>> result = sol.allCellsDistOrder(rows, cols, r, c);

    cout<<"Cells in the order of their distance from the center are :\n[ ";
    for(auto& cell : result){
        cout <<"["<< cell[0] <<","<< cell[1] <<"] ";
    }
    cout <<"]"<< endl;
    
    return 0;
}