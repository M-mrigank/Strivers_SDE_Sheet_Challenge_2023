#include<bits/stdc++.h>
bool safe(int r, int c, vector<vector<int>>&v, int n){
    int row=r, col=c;
    while(row>=0 && col>=0){
        if(v[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    row=r; col=c;
    while(col>=0){
        if(v[row][col]==1){
            return false;
        }
        col--;
    }
    col=c;
    while(col>=0 && row<n){
        if(v[row][col]==1){
            return false;
        }
        row++;
        col--;
    }
    return true;
}
void solve(int i, vector<vector<int>>&v, vector<vector<int>>&ans, int n){
    if(i==n){
        vector<int>temp;
        for(int k=0; k<n; k++){
            for(int j=0; j<n; j++){
                temp.push_back(v[k][j]);
            }
        }
        ans.push_back(temp);
        return;
    }
    for(int j=0; j<n; j++){
        if(safe(j, i, v, n)){
            v[j][i]=1;
            solve(i+1, v, ans, n);
            v[j][i]=0;
        }
    }
}
vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>>ans, v(n, vector<int>(n, 0));
    solve(0, v, ans, n);
    return ans;
}
