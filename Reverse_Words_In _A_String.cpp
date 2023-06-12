#include<bits/stdc++.h>
string reverseString(string &str){
	// Write your code here.
	stack<string>s;
	for(int i=0; i<str.size(); i++){
		string s1="";
		while(str[i]!=' ' && i<str.size()){
			s1+=str[i];
			i++;
		}
		if(!s1.empty()){
			s.push(s1);
		}
	}
	string ans="";
	while(!s.empty()){
		ans+=s.top();
		ans+=' ';
		s.pop();
	}
	return ans;
}
