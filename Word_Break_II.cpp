#include <bits/stdc++.h> 
void f(int i, string&temp, string&s, map<string, int>&mp, vector<string>&v){
    if(i==s.size()){
        v.push_back(temp);
        return;
    }

    for(int j=i; j<s.size(); j++){
        string s1=s.substr(i, j-i+1);
        if(mp[s1]==1){
            temp.append(s1);
            temp.push_back(' ');
            f(j+1, temp, s, mp, v);
            temp=temp.substr(0, temp.size()-j+i-2);
        }
    }
}
vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // Write your code here
    vector<string>v;
    map<string, int>mp;
    for(auto it: dictionary){
        mp[it]=1;
    }
    string temp="";
    f(0, temp, s, mp, v);
    return v;

}
