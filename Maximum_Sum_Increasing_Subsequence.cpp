#include <bits/stdc++.h> 
int f(int i, int j, vector<int>&rack, vector<vector<int>>&dp){
	if(i==0){
		int tk=0;
		if(j==-1 || rack[i]<rack[j]){
			tk=max(tk, rack[i]);
		}
		return tk;
	}
	if(dp[i][j+1]!=-1){
		return dp[i][j+1];
	}
	int tk=f(i-1, j, rack, dp);
	if(j==-1 || rack[i]<rack[j]){
		tk=max(tk, rack[i]+f(i-1, i, rack, dp));
	}
	return dp[i][j+1]=tk;
}
int maxIncreasingDumbbellsSum(vector<int> &rack, int n)
{
	// Write your code here
	vector<vector<int>>dp(n, vector<int>(n+1, -1));
	return f(n-1, -1, rack, dp);
}
