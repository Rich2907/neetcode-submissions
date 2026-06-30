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
        int size=0;
       
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;

        }
         if(size==1)
        return NULL;
        temp=head;
        int k=size-n;
            int c=0;
            ListNode* prev;
            if(k==0)
            return head->next;
    while(temp!=NULL || c<=k )
        {
            if(c==k)
            {
prev->next=temp->next;
break;
            }
                c++;
                prev=temp;
                temp=temp->next;


        }
        return head;
    }
};
