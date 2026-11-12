
/* ================================== LeetCode Version ======================================

- Time Complexity: O(n) 
- Space Complexity: O(1) 

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tot_gas = 0, tot_cost = 0;
        for(int i = 0; i < gas.size(); i++){
            tot_gas += gas[i];
            tot_cost += cost[i];
        }

        if(tot_gas < tot_cost) return -1;

        int start = 0, curr_gas = 0;

        for(int i = 0; i < gas.size(); i++){
            curr_gas += gas[i] - cost[i];
            if(curr_gas < 0){
                // If the current gas is not enough to travel to the next station, 
                // then make next station as the starting point with 0 gas  
                curr_gas = 0;   
                start = i + 1;
            }
        }
        return start;
    }
};
========================================================================================== */

// ================================== Runnable Version ======================================

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {  
        int tot_gas = 0, tot_cost = 0;
        for(int i = 0; i < gas.size(); i++){
            tot_gas += gas[i];
            tot_cost += cost[i];
        }

        if(tot_gas < tot_cost) return -1;

        int start = 0, curr_gas = 0;

        for(int i = 0; i < gas.size(); i++){
            curr_gas += gas[i] - cost[i];
            if(curr_gas < 0){
                // If the current gas is not enough to travel to the next station, 
                // then make next station as the starting point with 0 gas  
                curr_gas = 0;   
                start = i + 1;
            }
        }
        return start;
    }
};

int main(){
    Solution sol;
    int n;
    cout << "Enter the number of gas stations : ";
    cin >> n;

    vector<int> gas(n), cost(n);
    cout <<"Enter the amount of gas at each station :\n";
    for(int i = 0; i < n; i++){
        cin >> gas[i];
    }

    cout <<"Enter the cost to travel to each station :\n";
    for(int i = 0; i < n; i++){
        cin >> cost[i];
    }
    
    cout <<"Starting point to complete a cycle : "<< sol.canCompleteCircuit(gas,  cost)<< endl;

    return 0;
}