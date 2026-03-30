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
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* temp=slow->next;
        ListNode* prev=slow->next=NULL;

        while(temp){
            ListNode* temp1=temp->next;
            temp->next=prev;
            prev=temp;
            temp=temp1;
        }
        ListNode* first=head;
        while(prev){
            ListNode* tmp1=first->next;
            ListNode* tmp2=prev->next;
            first->next=prev;
            prev->next=tmp1;
            first=tmp1;
            prev=tmp2;
        }
        
    }
};
