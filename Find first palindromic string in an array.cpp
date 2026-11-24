
/* ================================== LeetCode Version ======================================
- LeetCode Link : https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/

- Time Complexity : O(n) 
- Space Complexity : O(1) 

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string rev;
        for(string& word : words){
            rev = word;
            reverse(rev.begin(), rev.end());

            if(word == rev) return word;
        }
        return "";
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
    string firstPalindrome(vector<string>& words) {
        string rev;
        for(string& word : words){
            rev = word;
            reverse(rev.begin(), rev.end());

            if(word == rev) return word;
        }
        return "";
    }
};

int main(){
    Solution sol;
    int n;
    cout <<"Enter the number of strings : ";
    cin >> n;

    vector<string> words(n);
    cout <<"Enter the strings :\n";
    for(int i = 0; i < n; i++){
        cin >> words[i];
    }

    cout <<"The first palindromic string is : "<< sol.firstPalindrome(words);

    return 0;
}