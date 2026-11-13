
/* ================================== LeetCode Version ======================================

- Time Complexity: O(n) 
- Space Complexity: O(1) 

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 0){
                arr.insert(arr.begin() + i+1, 0); //Insert 0 to the next index
                i++;                              //Skip the newly inserted 0
                arr.pop_back();                   //Remove the last element to maintain the original array size
            }
        }
    }
};
========================================================================================== */

// ================================== Runnable Version ======================================

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 0){
                arr.insert(arr.begin() + i+1, 0); //Insert 0 to the next index
                i++;                              //Skip the newly inserted 0
                arr.pop_back();                   //Remove the last element to maintain the original array size
            }
        }
    }
};

int main(){
    Solution sol;
    int n;
    cout <<"Enter the array size : ";
    cin >> n;

    vector<int> arr(n);
    cout <<"Enter the array elements :\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sol.duplicateZeros(arr);
    cout <<"\nArray after duplicating zeros : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    
    return 0;
}