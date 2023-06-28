#include <bits/stdc++.h> 
int f(vector<int>&arr, int i,int j,vector<vector<int>>&dp) {
    if(i==j-1) {
        return dp[i][j]=0;
    }
    if(dp[i][j]!=-1) {
        return dp[i][j];
    }
    int ans=INT_MAX;
    for(int k=i+1; k<j; k++) {
        if(dp[i][k]==-1) {
            dp[i][k]=f(arr,i,k,dp);
        }
        if(dp[k][j]==-1) {
            dp[k][j]=f(arr,k,j,dp);
        }
        ans=min(ans,dp[i][k]+dp[k][j]+(arr[i]*arr[k]*arr[j]));
    }
    return dp[i][j]=ans;
}

int matrixMultiplication(vector<int> &arr, int N) {
    vector<vector<int>>dp(N+1,vector<int>(N+1,-1));
    return f(arr,0,N-1,dp);
}
