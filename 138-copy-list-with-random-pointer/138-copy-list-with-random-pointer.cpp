/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution 
{
public:
    Node* copyRandomList(Node* head) 
    {
        if(head==NULL) return NULL;
        
        Node *temp=head;
        
        while(temp!=NULL)
        {
        Node *newNode=new Node(temp->val);
        newNode->next=temp->next;
        temp->next=newNode;
        temp=temp->next->next;
        }
        
        temp=head;
        while(temp!=NULL && temp->next!=NULL)
        {
            if(temp->random!=NULL)
            {
            temp->next->random=temp->random->next;
            }
            temp=temp->next->next;
        }
        
        temp=head;
        
        Node *res=temp->next;
        Node *temp2=res;
        
        temp->next=temp->next->next;
        temp=temp->next;
        
        while(temp!=NULL && temp->next!=NULL)
        {
            temp2->next=temp2->next->next;
            temp2=temp2->next;
            temp->next=temp->next->next;
            temp=temp->next;
        }
        return res;
    }
};