#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    vector<int>v(26, 0);
    int k=0, cnt=1;
    for(int i=0; i<input.size(); i++){
        v[input[i]-'a']++;
        while(v[input[i]-'a']>1){
            v[input[k]-'a']--;
            k++;
        }
        cnt=max(cnt, i-k+1);
    }
    return cnt;
}
