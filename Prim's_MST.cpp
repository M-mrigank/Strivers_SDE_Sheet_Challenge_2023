#include <bits/stdc++.h> 
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // Write your code here.
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>q;
    q.push({0, {0, -1}});
    vector<pair<pair<int, int>, int>>ans;
    vector<vector<int>>adj[n];
    vector<int>v(n, 0);
    for(auto it: g){
        adj[it.first.first-1].push_back({it.first.second-1, it.second});
        adj[it.first.second-1].push_back({it.first.first-1, it.second});
    }
    // cout<<"here"<<endl;
    while(!q.empty()){
        int num=q.top().second.first, par=q.top().second.second, wt=q.top().first;
        q.pop();
        if(v[num]){continue;}
        v[num]=1;
        // cout<<cnt<<endl;
        if(par!=-1){
          ans.push_back({{par+1, num+1}, wt});
        }
        for(auto it: adj[num]){
            if(!v[it[0]]){
                q.push({it[1], {it[0], num}});
            }
        }
    }
    return ans;
}
