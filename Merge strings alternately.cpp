
/* ================================== LeetCode Version ======================================
- LeetCode Link : https://leetcode.com/problems/merge-strings-alternately/description/

- Time Complexity : O(m + n) 
- Space Complexity : O(m + n) 

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int m = word1.size();
        int n = word2.size();

        int i = 0;
        while(i < m || i < n){
            if(i < m){
                result += word1[i];
            }
            if(i < n){
                result += word2[i];
            }
            i++;
        }
        return result;
    }
};
========================================================================================== */

// ================================== Runnable Version ======================================

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int m = word1.size();
        int n = word2.size();

        int i = 0;
        while(i < m || i < n){
            if(i < m){
                result += word1[i];
            }
            if(i < n){
                result += word2[i];
            }
            i++;
        }
        return result;
    }
};

int main(){
    Solution sol;
    string w1, w2;
    cout <<"Enter two strings :\n";
    cin >> w1 >> w2;

    cout <<"The merged word : "<< sol.mergeAlternately(w1, w2);

    return 0;
}