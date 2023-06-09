#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	map<int, int>mp;
	for(int i=0; i<arr.size(); i++){
		mp[arr[i]]++;
	}
	return mp.size();
}
