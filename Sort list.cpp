
/* ================================== LeetCode Version ======================================
- LeetCode Link : https://leetcode.com/problems/sort-list/?envType=problem-list-v2&envId=two-pointers

- Time Complexity : O(n log n) 
- Space Complexity : O(log n) 

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
private:
    ListNode* Mid(ListNode* head){
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* list1, ListNode* list2){
        ListNode mergedList;
        ListNode* tail = &mergedList;

        while(list1 && list2){
            if(list1->val <= list2->val){
                tail->next = list1;
                list1 = list1->next; 
            }
            else{
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        if(list1) tail->next = list1;
        else tail->next = list2;

        return mergedList.next;
    }

public:
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        
        ListNode* mid = Mid(head);
        ListNode* rightHead = mid->next;
        mid->next = nullptr; // Breaks the head list into 2 separate lists

        ListNode* left = sortList(head);
        ListNode* right = sortList(rightHead);

        return merge(left, right);
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
private:
    ListNode* Mid(ListNode* head){
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* list1, ListNode* list2){
        ListNode mergedList;
        ListNode* tail = &mergedList;

        while(list1 && list2){
            if(list1->val <= list2->val){
                tail->next = list1;
                list1 = list1->next; 
            }
            else{
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        if(list1) tail->next = list1;
        else tail->next = list2;

        return mergedList.next;
    }

public:
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        
        ListNode* mid = Mid(head);
        ListNode* rightHead = mid->next;
        mid->next = nullptr; // Breaks the head list into 2 separate lists

        ListNode* left = sortList(head);
        ListNode* right = sortList(rightHead);

        return merge(left, right);
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

int main() {
    Solution sol;
    int n;
    cout <<"Enter the number of nodes : ";
    cin >> n;

    cout <<"Enter the node values :\n";
    ListNode* head = createList(n);
    
    cout <<"Sorted list : ";
    printList(sol.sortList(head));

    return 0;
}