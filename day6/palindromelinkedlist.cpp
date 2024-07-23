class Solution {
public:
    bool isPalindrome(ListNode* head) {
       vector<int> v;
        while(head!=nullptr){
            v.push_back(head->val);
            head = head->next;
        }
        int n = v.size();
        int i=0, j=n-1;
        while(i<j){
            if(v[i]!=v[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
          
    }
};