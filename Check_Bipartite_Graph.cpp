#include<bits/stdc++.h>
bool isGraphBirpatite(vector<vector<int>> &edges) {
	// Write your code here.
	vector<int>adj[edges.size()];
	for(int i=0; i<edges.size(); i++){
		for(int j=0; j<edges[0].size(); j++){
			if(edges[i][j]){
				adj[i].push_back(j);
				adj[j].push_back(i);
			}
		}
	}
	vector<int>v(edges.size(), -1);
	for(int i=0; i<edges.size(); i++){
		if(v[i]==-1){
			v[i]=0;
			queue<int>q;
			q.push(i);
			while(!q.empty()){
				int num=q.front();
				q.pop();
				for(auto it: adj[num]){
					if(v[it]==-1){
						v[it]=!v[num];
						q.push(it);
					}
					else if(v[it]==v[num]){
						return false;
					}
				}
			}
		}
	}
	return true;
}
