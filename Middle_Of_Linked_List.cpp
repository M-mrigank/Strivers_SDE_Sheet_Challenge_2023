/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    // Write your code here
    vector<int>v;
    Node* ans=NULL;
    while(head){
        v.push_back(head->data);
        head=head->next;
    }
    int n=v.size();
    while(v.size()!=(n+1)/2){
        v.erase(v.begin());
    }
    for(int i=v.size()-1; i>=0; i--){
        Node*temp=new Node;
        temp->data=v[i];
        temp->next=ans;
        ans=temp;
    }
    return ans;
}

