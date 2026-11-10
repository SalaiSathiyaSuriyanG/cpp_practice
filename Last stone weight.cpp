
/* ================================== LeetCode Version ======================================

- Time Complexity: O(n) 
- Space Complexity: O(n) //We store all the stones in a priority queue 

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());

        while(pq.size() > 1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();

            if(x > y) pq.push(x - y);
        }
        return pq.empty() ? 0 : pq.top();
    }
};
========================================================================================== */

// ================================== Runnable Version ======================================

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());

        while(pq.size() > 1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();

            if(x > y) pq.push(x - y);
        }
        return pq.empty() ? 0 : pq.top();
    }
};

int main(){
    Solution sol;
    int n;
    cout <<"Enter the number of stones : ";
    cin >> n;

    vector<int> stones(n);
    cout <<"Enter the weight of each stone :\n";
    for(int i = 0; i < n; i++){
        cin >> stones[i];
    }

    cout <<"Weight of the last remaining stone : "<< sol.lastStoneWeight(stones)<< endl;

    return 0;
}