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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head=new ListNode(1);
        ListNode* h=head;
        //   ListNode* h=null/
        while(list1!=NULL && list2!=NULL)
        {
        if(list1->val <=list2->val)
        {
            ListNode* n=new ListNode(list1->val);
            list1=list1->next;
            head->next=n;
                head=n;
        }
         else 
        {
            ListNode* n=new ListNode(list2->val);
            head->next=n;
            list2=list2->next;
                head=n;
        }
            
        }
        while(list1!=NULL)
        {
             ListNode* n=new ListNode(list1->val);
             list1=list1->next;
            head->next=n;
                head=n;
        }
         while(list2!=NULL)
        {
             ListNode* n=new ListNode(list2->val);
               list2=list2->next;
            head->next=n;
                head=n;
        }
       return h->next; 

    }
};