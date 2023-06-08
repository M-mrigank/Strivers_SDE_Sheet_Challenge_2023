#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	map<int, int>mp;
	for(int i=0; i<n; i++){
		mp[arr[i]]++;
	}
	int maxi=0, ans=0, cnt=0;
	for(auto it: mp){
		if(maxi<it.second){
			ans=it.first;
		}
		maxi=max(maxi, it.second);
	}
	if(maxi<=n/2){return -1;}
	for(auto it: mp){
		if(it.second==maxi){
			cnt++;
		}
	}
	if(cnt>1){return -1;}
	return ans;
}
