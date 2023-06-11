#include <bits/stdc++.h> 
int f(int i, int j, vector<vector<int>>&dp, vector<vector<int>>&grid){
    if(i==0 && j==0){
        return grid[i][j];
    }
    if(i<0 || j<0){return 1e9;}
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int top=grid[i][j]+f(i, j-1, dp, grid);
    int left=grid[i][j]+f(i-1, j, dp, grid);
    return dp[i][j]=min(top, left);
}
int minSumPath(vector<vector<int>> &grid) {
    // Write your code here.
    vector<vector<int>>dp(grid.size(), vector<int>(grid[0].size(), -1));
    return f(grid.size()-1, grid[0].size()-1, dp, grid);
}
