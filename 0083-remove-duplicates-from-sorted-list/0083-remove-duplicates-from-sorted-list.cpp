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
class Solution 
{
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode *newNode=new ListNode();
        ListNode *p1=head;
        newNode->next=head;
        while(head!=NULL)
        {
            head=head->next;
            while(head!=NULL && p1->val==head->val)
            {
                head=head->next;
            }
            p1->next=head;
            p1=head;
        }
        return newNode->next;
    }
};