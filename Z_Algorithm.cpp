#include<bits/stdc++.h>
#define ll long long int
const int M=1e9+7;
ll hashs(string& s){
	ll cnt=1, ans=0;
	for(auto it: s){
		ans=(ans+((it-'a'+1)*cnt)%M)%M;
		cnt=(cnt*31*1LL)%M;
	}
	return ans;
}
ll power(ll a, ll b){
	ll ans=1;
	while(b){
		if(!(b%2)){
			a=(a*a)%M;
			b/=2;
		}
		else{
			ans=(ans*a)%M;
			b--;
		}
	}
	return ans;
}
int zAlgorithm(string s, string p, int n, int m)
{
	// Write your code here
	if(s.size()<p.size()){
		return 0;
	}
	ll l=p.size();
	string s1=s.substr(0, l);
	// cout<<s1<<" "<<p<<endl;
	ll num=hashs(p), cnt=1, cnt1=power(31, l), num1=hashs(s1);
	int ans=0;
	if(num==num1){ans++;}
	// cout<<ans<<endl;
	for(ll i=l; i<s.size(); i++){
		num1=(num1-((s[i-l]-'a'+1)*cnt)%M+M)%M;
		num1=(num1+((s[i]-'a'+1)*cnt1)%M)%M;
		num=(num*31*1LL)%M;
		// cout<<num<<" "<<num1<<endl;
		if(num==num1){ans++;}
		cnt1=(cnt1*31*1LL)%M;
		cnt=(cnt*31*1LL)%M;
	}
	return ans;
}
