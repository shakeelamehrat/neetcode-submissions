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
        ListNode* temp= head;
        int count=0;
        while(temp!= NULL){
            count++;
            temp= temp->next;
        }
        if(count==n){
            ListNode* newHead= head->next;
            delete head;
            return newHead;
        }
        int k= count-n+1;
        count=0;
        temp= head;
        while(temp!= NULL){
            count++;
            if(count==k-1) break;
            temp= temp->next;
        }
        ListNode* node= temp->next;
        temp->next= temp->next->next;
        delete node;
        return head;
    }
};
