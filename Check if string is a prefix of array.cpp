
/* ================================== LeetCode Version ======================================
- LeetCode Link : https://leetcode.com/problems/check-if-string-is-a-prefix-of-array/description/

- Time Complexity : O(n) 
- Space Complexity : O(1) 

class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string result = "";
        
        for(int i = 0; i < words.size(); i++){
            result += words[i];
            if(result == s) return true;
        }
        return false;
    }
};
========================================================================================== */

// ================================== Runnable Version ======================================

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string result = "";
        
        for(int i = 0; i < words.size(); i++){
            result += words[i];
            if(result == s) return true;
        }
        return false;
    }
};

int main(){
    Solution sol;
    int n;
    string s;

    cout <<"Enter a string s : ";
    cin >> s;

    cout <<"Enter the number of words : ";
    cin >> n;

    vector<string> words(n);
    for(int i = 0; i < n; i++){
        cin >> words[i];
    }

    if(sol.isPrefixString(s, words))
        cout <<"String is prefix of array"<< endl;
    else
        cout <<"String is not a prefix of array"<< endl;

    return 0;
}