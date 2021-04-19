// leetcode 19.04.21 19. Remove Nth Node From End of List

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr && n == 1){
            return {};
        }
        if(head->next->next == nullptr){
            if (n==1){
                head->next = nullptr;
                return head;
            }else{
                head = head->next;
                return head;
            }
        }
        ListNode* c = head;
        int m = 0;
        while(c!=nullptr){
            m++;
            c=c->next;
        }
        if(n==m){
            return head->next;
        }
        ListNode* ans = head;
         for(int i=0;i<m-n-1;i++){
            head = head->next;
        }
        if(head->next->next!=nullptr){  
            head = head->next;
            ListNode* tmp = head->next;
            head->val = tmp->val;
            head->next=tmp->next;
            tmp->next = nullptr;
        }else{
            head->next=nullptr;
        }
        return ans;
    }
};
