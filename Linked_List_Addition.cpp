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
        int a=0,b=0,sum=0;
        ListNode *l3=new ListNode(0);
        ListNode *head3=l3;
        ListNode *head1=l1;
        ListNode *head2=l2;
        while(head1!=NULL||head2!=NULL){
            a=(head1==NULL?0:head1->val);
            b=(head2==NULL?0:head2->val);
            sum=sum+a+b;
            head3->next=new ListNode(sum%10);
            head3=head3->next;
            if(head1!=NULL)head1=head1->next;
            if(head2!=NULL)head2=head2->next;
            sum=sum/10;    
        }
        if(sum!=0){
            head3->next=new ListNode(sum);
        }
        head3=l3->next;
        delete l3;
        return head3;
        
    }
};
