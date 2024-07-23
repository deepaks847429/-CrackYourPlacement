class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
       while(head!=NULL && head->val==val){
        ListNode* p=head;
        head=head->next;
        delete p;
       }
        ListNode* temp=head;
        while(temp && temp->next){
            if(temp->next->val==val){
                ListNode* p=temp->next;
                temp->next=temp->next->next;
                delete p;
            }
            else{
                temp=temp->next;
            }

        }
        return head;
    }
};