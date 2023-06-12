#include <bits/stdc++.h> 
class Kthlargest {
public:
    priority_queue<int, vector<int>, greater<int>>q;
    int n;
    Kthlargest(int k, vector<int> &arr) {
       // Write your code here.
       for(int i=0; i<arr.size(); i++){
           q.push(arr[i]);
           if(q.size()>k){q.pop();}
       }
       n=k;
    }

    void add(int num) {
        // Write your code here.
        q.push(num);
        if(q.size()>n){
            q.pop();
        }
    }

    int getKthLargest() {
       // Write your code here.
       return q.top();
    }

};
