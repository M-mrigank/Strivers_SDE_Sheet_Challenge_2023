#include<bits/stdc++.h>
int lcs(string s, string t)
{
	//Write your code here
	vector<vector<int>>v(s.size()+1, vector<int>(t.size()+1, 0));
	for(int i=1; i<s.size()+1; i++){
		for(int j=1; j<t.size()+1; j++){
			if(s[i-1]==t[j-1]){
				v[i][j]=1+v[i-1][j-1];
			}
			else{
				v[i][j]=max(v[i-1][j], v[i][j-1]);
			}
		}
	}
	return v[s.size()][t.size()];
}
