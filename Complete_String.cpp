#include <bits/stdc++.h> 
string completeString(int n, vector<string> &a){
    // Write your code here.
    set<string>s;
    string temp= "";
    for(int i=0; i<n; i++){s.insert(a[i]);}
    for(auto it: a){
        int m= it.size(), chk=1;
        for(int j=1; j<=m; j++){
            string t=it.substr(0,j);
            if(s.find(t)==s.end()){
                chk=-1;
                break;
            }
        }
        if(chk==1){
            if(temp.size()==m){
                temp=min(temp, it);
            }
            else if(temp.size()<m){
                temp=it;
            }
        }
    }
    if(!temp.empty()){return temp;}
    return "None";
}
