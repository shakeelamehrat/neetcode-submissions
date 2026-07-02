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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next== NULL) return;
        ListNode* slow= head;
        ListNode* fast= head->next;
        while(fast!=NULL && fast->next!= NULL){
            slow= slow->next;
            fast= fast->next->next;
        }
        ListNode* second= slow->next;
        ListNode* prev= nullptr;
        slow->next= nullptr;
        while(second!= NULL){
            ListNode* temp= second->next;
            second->next= prev;
            prev= second;
            second= temp;
        }
        second= prev;
        ListNode* first= head;
        while(second!=NULL){
            ListNode* curr1= first->next;
            first->next= second;
            ListNode* curr2= second->next;
            second->next= curr1;
            first= curr1;
            second= curr2;
        }
    }
};
