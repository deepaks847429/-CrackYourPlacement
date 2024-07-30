class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        vector<int> val;
        ListNode* curr=head;
        while(curr!=NULL){
            val.push_back(curr->val);
            curr=curr->next;
        }
        sort(val.begin(),val.end());
        curr=head;
        int idx=0;
        while(curr!=NULL){
            curr->val=val[idx];
            idx++;
            curr=curr->next;
        }
        return head;
    }

};