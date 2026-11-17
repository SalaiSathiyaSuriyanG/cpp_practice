
/* ================================== LeetCode Version ======================================
- LeetCode Link : https://leetcode.com/problems/find-the-distance-value-between-two-arrays/description/

- Time Complexity: O(m * n) 
- Space Complexity: O(1) 

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        for(int i : arr1){
            bool safe = true;
            for(int j : arr2){
                if(abs(i - j) <= d){
                    safe = false;
                    break;
                }
            }
            if(safe) count++;
        }
        return count;
    }
};
========================================================================================== */

// ================================== Runnable Version ======================================

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        for(int i : arr1){
            bool safe = true;
            for(int j : arr2){
                if(abs(i - j) <= d){
                    safe = false;
                    break;
                }
            }
            if(safe) count++;
        }
        return count;
    }
};

int main(){
    Solution sol;
    int m,n,d;
    cout <<"Enter the size of arr1 and arr2 :\n";
    cin >> m >> n;

    vector<int> arr1(m), arr2(n);
    cout <<"Enter elements of arr1 :\n";
    for(int i=0; i<m; i++){
        cin >> arr1[i];
    }

    cout <<"Enter elements of arr2 :\n";
    for(int i=0; i<n; i++){
        cin >> arr2[i];
    }

    cout <<"Enter the value of minimum distance : ";
    cin >> d;

    int result = sol.findTheDistanceValue(arr1, arr2, d);
    cout <<"\nThe number of safe elements in arr1 is : "<< result << endl;

    return 0;
}