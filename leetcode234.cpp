// 01.04.21 leetcode 234. Palindrome Linked List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* list= head;
        stack <int> st;
        while(list != NULL){
                st.push(list->val);
                list = list->next;
        }
        while(head != NULL ){
             int tmp=st.top();
             st.pop();
             if(head ->val != tmp){
                return false;
            }
           head=head->next;
        }
 
        return true;
    }
};
