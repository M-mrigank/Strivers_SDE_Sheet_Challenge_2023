#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int cnt=0;
    unordered_set<int>s;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }
    for(int i=0; i<n; i++){
        if(s.find(arr[i]-1)==s.end()){
            int ans=0, val=arr[i];
            while(s.find(val)!=s.end()){
                ans++;
                val++;
            }
            cnt=max(ans, cnt);
        }
    }
    return cnt;
}
