#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	map<int, int>mp;
	for(int i=0; i<arr.size(); i++){
		mp[arr[i]]++;
	}
	int fs=-1, sc=-1, k=1;
	for(auto it: mp){
		if(fs==-1){
			if(k==it.first){
				k++;
			}
			else{
				fs=k;
			}
		}
		if(it.second==2){
			sc=it.first;
		}
	}
	if(fs==-1){
		fs=n;
	}
	return make_pair(fs, sc);
	
}
