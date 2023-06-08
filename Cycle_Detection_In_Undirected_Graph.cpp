#include<bits/stdc++.h>
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    vector<int>adj[n+1];
    vector<int>v(n+1, 0);
    for(auto it: edges){
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }
    for(int i=0; i<n; i++){
        if(!v[i]){
            queue<pair<int, int>>q;
            v[i]=1;
            q.push({i, -1});
            while(!q.empty()){
                int num=q.front().first, par=q.front().second;
                q.pop();
                for(auto it: adj[num]){
                    if(!v[it]){
                        v[it]=1;
                        q.push({it, num});
                    }
                    else if(par!=it){
                        return "Yes";
                    }
                }
            }
        }
    }
    return "No";
}
