
/* ================================== LeetCode Version ======================================
- LeetCode Link : https://leetcode.com/problems/reverse-prefix-of-word/description/

- Time Complexity : O(n) 
- Space Complexity : O(1) 

class Solution {
public:
    string reversePrefix(string word, char ch) {
        for(int i = 0; i < word.size(); i++){
            if(word[i] == ch){
                reverse(word.begin(), word.begin() + i + 1);
                break;
            }
        }
        return word;
    }
};
========================================================================================== */

// ================================== Runnable Version ======================================

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        for(int i = 0; i < word.size(); i++){
            if(word[i] == ch){
                reverse(word.begin(), word.begin() + i + 1);
                break;
            }
        }
        return word;
    }
};

int main(){
    Solution sol;
    string s;
    char ch;

    cout <<"Enter a string : ";
    cin >> s;

    cout <<"Enter a character to reverse the string : ";
    cin >> ch;

    string result = sol.reversePrefix(s, ch);
    
    if(s != result)
        cout <<"\nAfter reversing the string upto ch : "<< result;
    else{
        cout <<"\nCharacter doesn't exist in the string!!"<< endl;
        cout <<"Result : "<< result;
    }

    return 0;
}