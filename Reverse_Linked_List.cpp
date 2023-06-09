#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    vector<int>v;
    LinkedListNode<int>* ans=NULL;
    while(head){
        v.push_back(head->data);
        head=head->next;
    }
    reverse(v.begin(), v.end());
    for(int i=v.size()-1; i>=0; i--){
        LinkedListNode<int>*temp=new LinkedListNode<int>(-1);
        temp->data=v[i];
        temp->next=ans;
        ans=temp;
    }
    return ans;
}
