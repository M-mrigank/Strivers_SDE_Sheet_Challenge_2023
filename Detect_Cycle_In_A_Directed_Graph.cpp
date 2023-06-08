#include<bits/stdc++.h>
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
  vector<int>adj[n];
  for(auto it: edges){
    adj[it.first-1].push_back(it.second-1);
  }
  vector<int>v(n, 0);
  for(int i=0; i<n; i++){
      for(auto it: adj[i]){
          v[it]++;
      }
  }
  queue<int>q;
  for(int i=0; i<n; i++){
      if(!v[i]){
          q.push(i);
      }
  }
  int cnt=0;
  while(!q.empty()){
      int l=q.front();
      q.pop();
      cnt++;
      for(auto it: adj[l]){
          v[it]--;
          if(v[it]==0){
              q.push(it);
          }
      }
  }
  if(cnt==n){return false;}
  return true;
}
