#include<bits/stdc++.h>
long f(int i,int j, int *a,vector<vector<long>> &dp){
    if(i==0){
        return (j%a[0]==0);
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    long not_take = f(i-1, j, a, dp);
    long take =0;
    if(a[i]<=j){
        take = f(i, j-a[i], a, dp);
    }
    return dp[i][j]=take+not_take;
}
long countWaysToMakeChange(int *denominations, int n, int value)
{
    vector<vector<long>> dp(n,vector<long>(value+1,-1));
    return f(n-1,value,denominations,dp);
}
