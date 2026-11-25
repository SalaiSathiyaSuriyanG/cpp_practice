
/* ================================== LeetCode Version ======================================
- LeetCode Link : https://leetcode.com/problems/find-all-k-distant-indices-in-an-array/description/

- Time Complexity : O(n) 
- Space Complexity : O(1) 

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> result;
        int j = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] == key){
                int up_bound = min(i + k, n - 1); // Right boundary of valid window

                for(j = max(j, i - k); j <= up_bound; j++){ // Left boundary of valid window. Start from previous j to avoid duplicate index
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};
========================================================================================== */

// ================================== Runnable Version ======================================

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> result;
        int j = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] == key){
                int up_bound = min(i + k, n - 1); // Right boundary of valid window

                for(j = max(j, i - k); j <= up_bound; j++){ // Left boundary of valid window. Start from previous j to avoid duplicate index
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};

int main(){
    Solution sol;
    int n, key, k;
    cout <<"Enter the array size : ";
    cin >> n;

    cout <<"Enter the array elements :\n";
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    cout <<"Enter the key value and distance :\n";
    cin >> key >> k;

    vector<int> result = sol.findKDistantIndices(nums, key, k);
    cout <<"The K - distant indices are : [";
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout <<"]"<< endl;
    
    return 0;
}
