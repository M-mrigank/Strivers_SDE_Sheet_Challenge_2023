#include<bits/stdc++.h>
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here. 
    auto valid=[&](int i, int j, int n, int m)->bool{
        return i>=0 && j>=0 && i<n && j<m;
    };
    queue<pair<int, pair<int, int>>>q;
    vector<vector<int>>v(n, vector<int>(m, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j]==2){
                q.push({0, {i, j}});
                v[i][j]=1;
            }
        }
    }
    int ans=0;
    while(!q.empty()){
        int x=q.front().second.first, y=q.front().second.second, cnt=q.front().first;
        q.pop();
        // cout<<x<<" "<<y<<endl;
        ans=max(ans, cnt);
        int r[4]={0, 0, -1, 1};
        int c[4]={-1, 1, 0, 0};
        for(int i=0; i<4; i++){
            int row=r[i]+x, col=c[i]+y;
            if(valid(row, col, n, m) && grid[row][col]==1 && !v[row][col]){
                v[row][col]=1;
                q.push({cnt+1, {row, col}});
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j]==1 && !v[i][j]){return -1;}
        }
    }
    return ans;
}
