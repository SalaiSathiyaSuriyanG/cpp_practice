
/* ================================== LeetCode Version ======================================
- LeetCode Link : https://leetcode.com/problems/remove-palindromic-subsequences/description/

- Time Complexity: O(n) 
- Space Complexity: O(1) 

class Solution {
public:
    int removePalindromeSub(string s) {
        int i = 0;
        int j = s.size() - 1;

        while(i < j){
            // Since the string contains only 2 characters 'a' and 'b',
            // if s[i] and s[j] are distinct, it means we need to do atleast 2 passes to make the string empty.
            if(s[i] != s[j]) return 2;
            i++;
            j--;
        }
        return 1;
    }
};
========================================================================================== */

// ================================== Runnable Version ======================================

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int removePalindromeSub(string s) {
        int i = 0;
        int j = s.size() - 1;

        while(i < j){
            // Since the string contains only 2 characters 'a' and 'b',
            // if s[i] and s[j] are distinct, it means we need to do atleast 2 passes to make the string empty.
            if(s[i] != s[j]) return 2;
            i++;
            j--;
        }
        return 1;
    }
};

int main(){
    Solution sol;
    string s;
    cout << "Enter a string containing only 'a' and 'b' : ";
    cin >> s;

    cout << "Minimum number of passes to make the string empty : "<< sol.removePalindromeSub(s)<< endl;

    return 0;
}