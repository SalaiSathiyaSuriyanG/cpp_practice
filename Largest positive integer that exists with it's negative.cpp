
/* ================================== LeetCode Version ======================================
- LeetCode Link : https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/description/

- Time Complexity : O(n log n) 
- Space Complexity : O(1) 

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int i = 0, j = nums.size() - 1;
        while(i < j){
            if(nums[i] + nums[j] == 0) return nums[j];
            
            else if(nums[i] + nums[j] < 0) i++;
            
            else j--;
        }
        return -1;
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
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int i = 0, j = nums.size() - 1;
        while(i < j){
            if(nums[i] + nums[j] == 0) return nums[j];
            
            else if(nums[i] + nums[j] < 0) i++;
            
            else j--;
        }
        return -1;
    }
};

int main(){
    Solution sol;
    int n;
    cout <<"Enter the array size : ";
    cin >> n;

    vector<int> nums(n);
    cout <<"Enter the array elements :\n";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    if(sol.findMaxK(nums))
        cout <<"Largest positive integer with it's negative is : "<< sol.findMaxK(nums);
    else
        cout <<"Largest positive integer with it's negative doesn't exist in the array";
    
    return 0;
}