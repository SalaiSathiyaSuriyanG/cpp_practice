
/* ================================== LeetCode Version ======================================

- Time Complexity: O(m log m + n) 
- Space Complexity: O(n + log m) //We are using a hash map to store the frequency of elements in arr2, which takes O(n) space. 
                                 //The sorting operation takes O(log m) space for the recursive stack.

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> freq;
        for(int i = 0; i < arr2.size(); i++){
            freq[arr2[i]] = i;
        }

        sort(arr1.begin(), arr1.end(), [&](int a, int b){
            int freq_A = freq.count(a) ? freq[a] : arr2.size();
            int freq_B = freq.count(b) ? freq[b] : arr2.size();

            // If priorities match (both not in arr2, or same number), sort by value
            if(freq_A == freq_B) {
                return a < b;
            }
            // Otherwise, sort by their freq in arr2
            return freq_A < freq_B;
        });
        return arr1;
    }
};
========================================================================================== */

// ================================== Runnable Version ======================================

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> freq;
        for(int i = 0; i < arr2.size(); i++){
            freq[arr2[i]] = i;
        }

        sort(arr1.begin(), arr1.end(), [&](int a, int b){
            int freq_A = freq.count(a) ? freq[a] : arr2.size();
            int freq_B = freq.count(b) ? freq[b] : arr2.size();

            // If priorities match (both not in arr2, or same number), sort by value
            if(freq_A == freq_B) {
                return a < b;
            }
            // Otherwise, sort by their freq in arr2
            return freq_A < freq_B;
        });
        return arr1;
    }
};

int main(){
    Solution sol;
    int m,n;
    cout <<"Enter the size of arr1 and arr2 :\n";
    cin >> m >> n;

    vector<int> arr1(m), arr2(n);
    cout <<"Enter the elements of arr1 :\n";
    for(int i = 0; i < m; i++){
        cin >> arr1[i];
    }

    cout <<"Enter the elements of arr2 :\n";
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }

    vector<int> result = sol.relativeSortArray(arr1, arr2);
    cout <<"\nThe sorted array is : ";
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;
}