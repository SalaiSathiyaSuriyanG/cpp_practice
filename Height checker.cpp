
/* ================================== LeetCode Version ======================================

- Time Complexity: O(n log n) 
- Space Complexity: O(n) 

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> exp(heights);
        sort(exp.begin(), exp.end());
        int count = 0;

        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != exp[i]) count++;
        }
        return count;
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
    int heightChecker(vector<int>& heights) {
        vector<int> exp(heights);
        sort(exp.begin(), exp.end());
        int count = 0;

        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != exp[i]) count++;
        }
        return count;
    }
};

int main(){
    Solution sol;
    int n;
    cout <<"Enter the number of students : ";
    cin >> n;

    vector<int> heights(n);
    cout <<"Enter the heights of students :\n";
    for(int i = 0; i < n; i++){
        cin >> heights[i];
    }

    cout <<"Number of students not in the correct position : "<< sol.heightChecker(heights)<< endl;

    return 0;
}