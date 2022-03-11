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
      if(head==NULL || head->next==NULL){
          return head;
      }
      int len = 1;
      ListNode* newEndNode = head;
      ListNode* lastNode = head;
        while(lastNode->next != NULL){
            len++;
            lastNode = lastNode->next;
        }
        k = k%len;
        if(k==0)
            return head;
        for(int i=1;i<len-k;i++){
            newEndNode = newEndNode->next;
        }
        ListNode* newHead= newEndNode->next;
        newEndNode->next = NULL;
        lastNode->next = head;
        return newHead;
        
       
    }
};