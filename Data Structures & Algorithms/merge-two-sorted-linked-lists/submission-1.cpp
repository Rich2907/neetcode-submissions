
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
        ListNode* head=new ListNode(0);
        ListNode* h=head;
        while(list1!=NULL && list2!=NULL)
        {
            if (list1->val <=list2->val)
        {
            ListNode* cur= new ListNode(list1->val);
            head->next=cur;
            head=head->next;
            list1=list1->next;
        }
       else if (list1!=NULL && list2!=NULL && list1->val >list2->val)
        {
            ListNode* cur= new ListNode(list2->val);
            head->next=cur;
            head=head->next;
            list2=list2->next;
        }
        }
         while(list1!=NULL )
        {
            ListNode* cur= new ListNode(list1->val);
            list1=list1->next;
            head->next=cur;
            head=head->next;
        }
        while(list2!=NULL )
        {
            ListNode* cur= new ListNode(list2->val);
            list2=list2->next;
            head->next=cur;
            head=head->next;
        }
        head->next=NULL;
return h->next;


    }
};
