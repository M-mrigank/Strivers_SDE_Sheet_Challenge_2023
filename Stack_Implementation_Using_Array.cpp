#include <bits/stdc++.h> 
// Stack class.
class Stack {
    
public:
    vector<int>arr;
    int n;
    Stack(int capacity) {
        // Write your code here.
        n=capacity;
    }

    void push(int num) {
        // Write your code here.
        if(isFull()==0){arr.push_back(num);}
    }

    int pop() {
        // Write your code here.
        if(isEmpty()){return -1;}
        int num=arr[arr.size()-1];
        arr.pop_back();
        return num;
    }
    
    int top() {
        // Write your code here.
        if(isEmpty()){return -1;}
        return arr[arr.size()-1];
    }
    
    int isEmpty() {
        // Write your code here.
        return arr.empty();
    }
    
    int isFull() {
        // Write your code here.
        return arr.size()==n;
    }
    
};
