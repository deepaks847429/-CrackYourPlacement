class Solution {
public:
    bool Ent = false;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1 == NULL && l2 == NULL) {
            if(Ent){
                ListNode * l = new  ListNode(1);
                return l;
            }
            return NULL;
        }

        // int sum = l1->val + l2->val;
        
        int sum = 0;
        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }


        if (Ent) {
            sum += 1;
            Ent = false;
        }

        if (sum > 9) {
            sum -= 10;
            Ent = true;
        }
        
         ListNode* l3 = new ListNode(sum);
        l3->next = addTwoNumbers(l1, l2);
        return l3;
    }
};