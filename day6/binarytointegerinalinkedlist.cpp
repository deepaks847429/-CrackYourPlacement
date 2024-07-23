class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string temp = "";
        ListNode* curr = head;
        while(curr !=  NULL){
            temp += curr->val + '0';
            curr = curr->next;
        }

        reverse(temp.begin(), temp.end());
        int n = temp.length(), ans = 0;
        for(int i=0; i<n; i++){
            ans += pow(2,i) * (temp[i] - '0');
        }
        return ans;

    }
};