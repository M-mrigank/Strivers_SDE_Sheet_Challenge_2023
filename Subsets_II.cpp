#include <bits/stdc++.h> 
void f(vector<int> &arr,int i,vector<int> &ds,vector<vector<int>> &ans){
    if(i == arr.size()){
        return ;
    }
    ds.push_back(arr[i]);
    ans.push_back(ds);
    f(arr,i+1,ds,ans);
    while(i < arr.size() - 1 && arr[i] == arr[i+1])i++;
    ds.pop_back();
    f(arr,i+1,ds,ans);
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> ds;
    sort(arr.begin() , arr.end());
    f(arr, 0, ds,ans);
    return ans;
}
