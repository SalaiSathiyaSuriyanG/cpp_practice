
/* ================================== LeetCode Version ======================================
- LeetCode Link : https://leetcode.com/problems/check-if-n-and-its-double-exist/description/

- Time Complexity: O(n) 
- Space Complexity: O(1) 

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> seen;

        for(int x : arr){
            // Check whether there exist 2 elements x and y 
            // such that x = 2y or y = 2x
            if(seen.count(2 * x) || (x % 2 == 0 && seen.count(x / 2)))
                return true;
            
            else seen.insert(x);
        }
        return false;
    }
};
========================================================================================== */

// ================================== Runnable Version ======================================

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> seen;

        for(int x : arr){
            // Check whether there exist 2 elements x and y 
            // such that x = 2y or y = 2x
            if(seen.count(2 * x) || (x % 2 == 0 && seen.count(x / 2)))
                return true;
            
            else seen.insert(x);
        }
        return false;
    }
};

int main(){
    Solution sol;
    int n;
    cout <<"Enter the number of elements in the array : ";
    cin >> n;

    vector<int> arr(n);
    cout <<"Enter the elements of the array :\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout <<"Are there two elements x and y such that x = 2y or y = 2x ? : ";
    if(sol.checkIfExist(arr))
        cout <<"Yes"<<endl;
    else
        cout <<"No"<<endl;

    return 0;
}