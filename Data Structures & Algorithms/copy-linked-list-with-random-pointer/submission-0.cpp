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

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
        return head;
        Node* copy=head;
        unordered_map<Node*,Node*>n;
        while(head!=NULL)
        {
            Node* ne=new Node(head->val);
            n[head]=ne;
            head=head->next;
        }

      Node* h;
      Node* temp=n[copy];

      while(copy!=NULL)
      {
        h=n[copy];
        h->next=n[copy->next];
        h->random=n[copy->random];
    copy=copy->next;
        h=h->next;
      }  
    
      return temp;

    }
};
