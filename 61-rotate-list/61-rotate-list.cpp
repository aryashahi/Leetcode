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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* temp = head;
        int cnt=1;
        while(temp->next!=NULL){
            cnt++;
            temp=temp->next;
        }
        k  = k%cnt;
        ListNode* newtail = head;
        if(k==0)
            return head;
        for(int i=1;i<cnt-k;i++){
            newtail=newtail->next;
        }
        
        ListNode* newhead = newtail->next;
        newtail->next=NULL;
        temp->next=head;
        
        return newhead;
        
        
        
    }
};