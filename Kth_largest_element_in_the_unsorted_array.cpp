#include <bits/stdc++.h> 
int kthLargest(vector<int>& arr, int size, int k)
{
	// Write your code here.
	priority_queue<int, vector<int>, greater<int>>q;
	for(int i=0; i<arr.size(); i++){
		q.push(arr[i]);
		if(q.size()>k){
			q.pop();
		}
	}
	return q.top();
}
