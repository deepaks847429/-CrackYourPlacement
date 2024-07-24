class Solution {
public:
    Node* helper(Node* head,unordered_map<Node*,Node*>&mp){ // isse new LL ban jaegi
    // and mapping bhi 
        if(head==NULL) return NULL;
        Node* newHead = new Node(head->val);
        mp[head] = newHead;
        newHead->next = helper(head->next,mp);
        if(head->random){
            newHead->random = mp[head->random];
        }
        return newHead;
    }
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>mp; // old node-> new node mapping;
        return helper(head,mp);
    }
};