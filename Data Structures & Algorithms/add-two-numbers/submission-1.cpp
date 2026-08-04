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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h=new ListNode(1);
        ListNode* he=h;
int c=0;
        while(l1!=nullptr && l2 != nullptr)
        {
            ListNode* ne=new ListNode((l1->val+l2->val+c)%10);
            h->next=ne;
            c=(l1->val+l2->val+c)/10;
            h=h->next;
            l1=l1->next;
            l2=l2->next;

        }
        while(l1!=NULL)
        {
            ListNode* ne=new ListNode((l1->val+c)%10);
            h->next=ne;
            c=(l1->val+c)/10;
            h=h->next;
            l1=l1->next;

        }
         while(l2!=NULL)
        {
            ListNode* ne=new ListNode((l2->val+c)%10);
            h->next=ne;
            c=(l2->val+c)/10;
            h=h->next;
            l2=l2->next;

        }

        if(c>0)
        {
            ListNode* ne=new ListNode(c);
            h->next=ne;
            c=0;
            h=h->next;
        }


return he->next;

    }
};
