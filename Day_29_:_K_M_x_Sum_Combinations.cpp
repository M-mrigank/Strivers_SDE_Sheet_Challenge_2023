#include <bits/stdc++.h> 
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	// Write your code here.
	priority_queue<int>q;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			q.push(a[i]+b[j]);
			
		}
	}
	vector<int>ans;
	int cnt=0;
	while(cnt<k){
		ans.push_back(q.top());
		q.pop();
		cnt++;
	}
	// reverse(ans.begin(), ans.end());
	return ans;
}
