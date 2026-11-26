
/* ================================== LeetCode Version ======================================
- LeetCode Link : https://leetcode.com/problems/number-of-arithmetic-triplets/description/

- Time Complexity : O(n) 
- Space Complexity : O(n) 

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> seen(nums.begin(), nums.end());
        int triplets = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(seen.count(nums[i] + diff) && 
               seen.count(nums[i] + (2*diff))){
                triplets++;
            }
        }
        return triplets;
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
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> seen(nums.begin(), nums.end());
        int triplets = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(seen.count(nums[i] + diff) && 
               seen.count(nums[i] + (2*diff))){
                triplets++;
            }
        }
        return triplets;
    }
};

int main(){
    Solution sol;
    int n, diff;
    cout <<"Enter the array size : ";
    cin >> n;

    vector<int> nums(n);
    cout <<"\nEnter the array elements (strictly increasing) :\n";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    cout <<"\nEnter the difference : ";
    cin >> diff;

    cout <<"\nNumber of arithmetic triplets : "<< sol.arithmeticTriplets(nums, diff);

    return 0;
}