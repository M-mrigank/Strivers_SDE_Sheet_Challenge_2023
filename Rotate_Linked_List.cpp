/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
     vector<int>v;
     if(!head){return head;}
     while(head){
          v.push_back(head->data);
          head=head->next;
     }
     rotate(v.begin(), v.begin()+v.size()-(k%v.size()), v.end());
     Node* ans=NULL;
     for(int i=v.size()-1; i>=0; i--){
          Node* temp=new Node;
          temp->data=v[i];
          temp->next=ans;
          ans=temp;
     }
     return ans;
}
