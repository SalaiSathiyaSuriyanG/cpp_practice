
/* ================================== LeetCode Version ======================================
- LeetCode Link : https://leetcode.com/problems/partition-list/description/

- Time Complexity : O(n) 
- Space Complexity : O(1) 

/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode smaller(0);
        ListNode greater(0);
        ListNode* before = &smaller;
        ListNode* after = &greater;

        while(head){
            if(head->val < x){
                before->next = head;
                before = before->next;
            }
            else{
                after->next = head;
                after = after->next;
            }
            head = head->next;
        }
        after->next = nullptr;
        before->next = greater.next;

        return smaller.next;
    }
};
========================================================================================== */

// ================================== Runnable Version ======================================

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode smaller(0);
        ListNode greater(0);
        ListNode* before = &smaller;
        ListNode* after = &greater;

        while(head){
            if(head->val < x){
                before->next = head;
                before = before->next;
            }
            else{
                after->next = head;
                after = after->next;
            }
            head = head->next;
        }
        after->next = nullptr;
        before->next = greater.next;

        return smaller.next;
    }
};

ListNode* createList(int n) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for(int i = 0; i < n; i++) {
        int value;
        cin >> value;

        ListNode* newNode = new ListNode(value);
        if(head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

void printList(ListNode* head) {
    while(head != nullptr) {
        cout << head->val;
        if(head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    Solution sol;
    int n, x;

    cout <<"Enter the number of nodes in the linked list : ";
    cin >> n;
    
    cout <<"\nEnter the elements of the linked list :"<< endl;
    ListNode* head = createList(n);

    cout <<"\nEnter the node value to partition the list : ";
    cin >> x;

    ListNode* result = sol.partition(head, x);
    cout <<"\nPartitioned list : ";
    printList(result);
    
    return 0;
}