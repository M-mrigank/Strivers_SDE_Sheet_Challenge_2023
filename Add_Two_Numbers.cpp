/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    vector<int>v1, v2;
    auto it=[&](vector<int>&v, Node* n)->void{
        while(n){
            v.push_back(n->data);
            n=n->next;
        }
    };
    it(v1, num1);
    it(v2, num2);
    int carry=0;
    // for(int i=0; i<v1.size(); i++){cout<<v1[i]<<" ";}cout<<endl;
    // for(int i=0; i<v2.size(); i++){cout<<v2[i]<<" ";}cout<<endl;
    vector<int>ans;
    int mini=min(v1.size(), v2.size());
    for(int i=0; i<mini; i++){
        ans.push_back((v1[i]+v2[i]+carry)%10);
        carry=((v1[i]+v2[i]+carry)/10);
    }
    for(int i=mini; i<v1.size(); i++){
        ans.push_back((v1[i]+carry)%10);
        carry=((v1[i]+carry)/10);
    }
    for(int i=mini; i<v2.size(); i++){
        ans.push_back((v2[i]+carry)%10);
        carry=((v2[i]+carry)/10);
    }
    if(carry){ans.push_back(carry);}
    // for(int i=0; i<ans.size(); i++){cout<<ans[i]<<" ";}cout<<endl;
    Node*root=NULL;
    for(int i=ans.size()-1; i>=0; i--){
        Node*temp=new Node;
        temp->data=ans[i];
        temp->next=root;
        root=temp;
    }
    return root;
}
