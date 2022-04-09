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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp= head;
        int cnt=1;
        while(temp!=NULL)
        {
            temp=temp->next;
            cnt++;
        }
        ListNode* dummy=head;
            int n=1;
            while(n<cnt/2){
                dummy=dummy->next;
                n++;
            }
             if(cnt%2==0){
                 return dummy;
             }
        else
            return dummy->next;
    }
};