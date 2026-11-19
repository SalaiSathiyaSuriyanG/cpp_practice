
/* ================================== LeetCode Version ======================================
- LeetCode Link : https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/description/

- Time Complexity : O(n) //Where n is the length of the sentence
- Space Complexity : O(n) 

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        int i = 1;

        while(ss >> word){
            // Check if the word starts with the searchWord
            if(word.find(searchWord) == 0) return i;
            i++;
        }
        return -1;
    }
};
========================================================================================== */

// ================================== Runnable Version ======================================

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        int i = 1;

        while(ss >> word){
            // Check if the word starts with the searchWord
            if(word.find(searchWord) == 0) return i;
            i++;
        }
        return -1;
    }
};

int main(){
    Solution sol;
    string s1, s2;
    cout <<"Enter a sentence : ";
    getline(cin, s1);

    cout <<"Enter the search word : ";
    cin >> s2;

    int result = sol.isPrefixOfWord(s1, s2);
    if(result != -1)
        cout <<"Prefix exists at word position : "<< result;
    else
        cout <<"Prefix does not exist.";
    
    return 0;
}