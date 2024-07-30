class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        vector<int>v;
        Node*temp=head;
        while(temp){
            v.push_back(temp->data);
            temp=temp->next;
        }
        int n=v.size();
        Node*temp1=new Node(v[n-1]);
        for(int i= n-2; i>=0; i--){
            if(v[i]>=temp1->data){
                Node* temp2=new Node(v[i]);
                temp2->next=temp1;
                temp1=temp2;
            }
        }
        return temp1;
    }
    