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
        ListNode* temp=head;
        ListNode* s=head;
        int size=0;
       
       while(head!=NULL)
       {
        size++;
        head=head->next;
       }
       int fn=size-n+1;
       if(size==1)
       return NULL;
       size=0;
     
       ListNode* prev=nullptr;
       ListNode* nex=temp->next;
       while(temp!=NULL )
    {
        nex=temp->next;
        size++;
        // cout<<size<<" "<<fn<<endl;
        if(size==fn)
        {
            if(prev==NULL)
           s=s->next;
            else
            prev->next=nex;
        }
        prev=temp;
        temp=nex;
    }
return s;       
    }
};
