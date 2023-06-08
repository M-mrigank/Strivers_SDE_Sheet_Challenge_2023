#include<bits/stdc++.h>
int getTotalIslands(int** arr, int n, int m)
{
   // Write your code here.
   auto isvalid=[&](int i, int j, int n, int m){
      return i>=0 &&& j>=0 && i<n && j<m;
   };
   vector<vector<int>>v(n, vector<int>(m, 0));
   int cnt=0;
   int r[8]={-1, -1, -1, 0, 0, 1, 1, 1};
   int c[8]={-1, 0, 1, -1, 1, -1, 0, 1};
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         if(arr[i][j] && !v[i][j]){
            queue<pair<int, int>>q;
            q.push({i, j});
            v[i][j]=1;
            cnt++;
            while(!q.empty()){
               int x=q.front().first, y=q.front().second;
               q.pop();
               for(int k=0; k<8; k++){
                  int row=r[k]+x, col=c[k]+y;
                  if(isvalid(row, col, n, m) && !v[row][col] && arr[row][col]){
                     v[row][col]=1;
                     q.push({row, col});
                  }
               }
            }
         }
      }
   }
   return cnt;
}
