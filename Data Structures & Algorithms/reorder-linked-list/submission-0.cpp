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
        vector<int>v;
        vector<int>ans;
        ListNode* l=head;
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        for(int i=0;i<v.size()/2;i++)
        {
            ans.push_back(v[i]);
            ans.push_back(v[v.size()-1-i]);
        }
        if(v.size()%2!=0)
        ans.push_back(v[v.size()/2 ]);
        for(auto it:ans)
        cout<<it<<" ";
        int i=0;
        while(l!=NULL)
        {
            l->val=ans[i];
            i++;
            l=l->next;
        }
        
    }
};