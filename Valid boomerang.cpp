
/* ================================== LeetCode Version ======================================

- Time Complexity: O(1) 
- Space Complexity: O(1) 

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& p) {
        // Non-collinearity formula : (x3 - x2)*(y2 - y1) != (x2 - x1)*(y3 - y2)
        return (p[2][0] - p[1][0]) * (p[1][1] - p[0][1]) != (p[1][0] - p[0][0]) * (p[2][1] - p[1][1]);
    }
};
========================================================================================== */

// ================================== Runnable Version ======================================

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& p) {
        // Non-collinearity formula : (x3 - x2)*(y2 - y1) != (x2 - x1)*(y3 - y2)
        return (p[2][0] - p[1][0]) * (p[1][1] - p[0][1]) != (p[1][0] - p[0][0]) * (p[2][1] - p[1][1]);
    }
};

int main(){
    Solution sol;
    int n = 3;

    vector<vector<int>> p(n, vector<int>(2));
    cout <<"Enter the coordinates of 3 points (x,y) :\n";
    for(int i = 0; i < p.size(); i++){
        cout <<"Point "<< i+1 <<" :\n";
        cin >> p[i][0] >> p[i][1];
    }
    cout <<"Is the given points a boomerang? : "<< (sol.isBoomerang(p) ? "Yes" : "No")<< endl;

    return 0;
}