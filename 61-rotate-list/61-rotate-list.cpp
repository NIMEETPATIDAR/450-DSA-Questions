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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL || k==0) return head;
        
        ListNode *fast=head;
        ListNode *slow=NULL;
        ListNode *curr=head;
        
        int length=1;
        while(curr->next!=NULL)
        {
            curr=curr->next;
            length++;
        }
        
        k=k%length;
        
        while(k>0)
        {
        while(fast->next!=NULL)
        {
            slow=fast;
            fast=fast->next;
        }
        
        fast->next=head;
        head=fast;
        slow->next=NULL;
        k--;    
        }
        return head;
    }
};