#include <bits/stdc++.h> 
void subsetSum(int index , int sum , vector<int> &arr, vector<int> &v){
    if(index == arr.size()){
        v.push_back(sum);
        return;
    }
    subsetSum(index+1, sum + arr[index], arr, v);
    subsetSum(index+1, sum, arr, v);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int> res;
    subsetSum(0, 0, num, res);
    sort(res.begin(), res.end());
    return res;
}
