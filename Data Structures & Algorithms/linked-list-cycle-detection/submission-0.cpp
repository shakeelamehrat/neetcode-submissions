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
    bool hasCycle(ListNode* head) {
        ListNode* temp= head;
        unordered_map<ListNode*, int> hash;
        while(temp){
            if(hash.find(temp)!=hash.end()) return true;
            hash[temp]= 1;
            temp= temp->next;
        }
        return false;
    }
};
