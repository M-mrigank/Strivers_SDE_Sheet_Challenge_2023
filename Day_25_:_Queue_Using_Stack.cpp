#include<bits/stdc++.h>
class Queue {
    // Define the data members(if any) here.
    
    public:
    stack<int>s;
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        s.push(val);
    }

    int deQueue() {
        // Implement the dequeue() function.
        if(isEmpty()){return -1;}
        vector<int>v;
        while(s.size()>1){
            v.push_back(s.top());
            s.pop();
        }
        int num=s.top();
        s.pop();
        reverse(v.begin(), v.end());
        for(int i=0; i<v.size(); i++){
            s.push(v[i]);
        }
        return num;
    }

    int peek() {
        // Implement the peek() function here.
        if(isEmpty()){return -1;}
        vector<int>v;
        while(s.size()>1){
            v.push_back(s.top());
            s.pop();
        }
        int num=s.top();
        v.push_back(num);
        s.pop();
        reverse(v.begin(), v.end());
        for(int i=0; i<v.size(); i++){
            s.push(v[i]);
        }
        return num;
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        return s.empty();
    }
};
