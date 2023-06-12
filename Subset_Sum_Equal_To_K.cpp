#include <bits/stdc++.h> 
bool chk(int i, int j, vector<int>&arr, vector<vector<int>>&dp){
    if(arr[i]==j){return true;}
    if(i==0){
        return arr[i]==j;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    bool tk=false, ntk=false;
    if(arr[i]<=j){
        tk=chk(i-1, j-arr[i], arr, dp);
    }
    ntk=chk(i-1, j, arr, dp);
    return dp[i][j]=tk|ntk;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<vector<int>>dp(n, vector<int>(k+1, -1));
    return chk(n-1, k, arr, dp);
}
