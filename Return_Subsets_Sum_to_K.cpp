#include<bits/stdc++.h>
void f(int i,int sum,int k,vector<int> &num,vector<vector<int>> &st,vector<int> &v){
    if(i==num.size()){
        if(sum==k)st.push_back(v);
    return ;
    }
    f(i+1,sum,k,num,st,v);
    v.push_back(num[i]);
    f(i+1,sum+num[i],k,num,st,v);
    v.pop_back();
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>> st;
        vector<int> v;
    f(0,0,k,arr,st,v);
    return st;
}
