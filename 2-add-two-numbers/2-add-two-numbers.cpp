class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       
        int c=0;
        ListNode*  dummy = new  ListNode();
        ListNode* temp = dummy;
        while(l1 !=NULL || l2!=NULL || c){
            int sum=0;
            if(l1!=NULL){
            sum += l1->val;
            l1=l1->next;    
            }
             if(l2!=NULL){
            sum+= l2->val;
            l2=l2->next;    
            }
            sum+=c;
            c = sum/10;
            ListNode *node = new ListNode(sum%10);
            temp->next=node;
            temp= temp->next;
              
            }
        return dummy->next;
    }
};