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
        ListNode* reverse(ListNode* head)
        {
            ListNode* prev=nullptr;
            ListNode* cur=head;
            ListNode* nex=head->next;
            
            while(cur!=NULL)
            {
                cur->next=prev;
                // cout<<cur->val<<" "<<endl;
                prev=cur;
                cur=nex;
                nex=nex->next;
            }
            
            // while(prev!=NULL)
            // {
            //     cout<<prev->val<<"-- ";
            //     prev=prev->next;
            // }
            return prev;
            
        }


    void reorderList(ListNode* head) {
        if(head==NULL || head->next ==NULL)
        cout<<head->val<<endl;
        else{
       ListNode* fast=head;
       ListNode* slow=head;
       
       while(fast!=NULL && fast->next!=NULL)
       {
        fast=fast->next->next;
        slow=slow->next;
       }
       
       ListNode* temp=reverse(slow->next);
       slow->next=nullptr;
       ListNode* h=head;
       ListNode* hn=head->next;
       ListNode* rh=temp;
       ListNode* rhn=temp->next;
cout<<h->val<<" "<<rh->val<<" "<<endl;
        while(h!=NULL  && rh!=NULL &&  hn!=NULL && rhn!=NULL)
        {
            h->next=rh;
            rh->next=hn;
            h=hn;
            hn=hn->next;
            rh=rhn;
            rhn=rhn->next;
        }
        h->next=rh;
            rh->next=hn;
        while(head!=NULL)
        {
            cout<<head->val<<" ";
            head=head->next;
        }
        cout<<endl;
       
       
       



        }
    }
};