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
    ListNode* swapNodes(ListNode* &head, int k) {
        
        if(head == NULL || head->next == NULL) return head;
        ListNode *temp=head;
        ListNode *start=head;
        ListNode *end = head;
        int cnt = 0;
        
        while(temp!=NULL)
        {   cnt++;
            temp=temp->next;
        }
        int n1=0,n2=0;
        while(n1<k-1 )
        {   
         start=start->next;
           n1++;
        }
         while(n2<cnt-k){
            
         end=end->next;
              n2++;
       }


        swap(start->val,end->val);
        return head;
    }
};