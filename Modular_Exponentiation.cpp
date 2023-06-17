#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	int ans=1%m;
    x%=m;
    while(n){
        if(n&1){
            ans=static_cast<long long>(ans)*x%m;
        }
        x=static_cast<long long>(x)*x%m;
        n>>=1;
    }
    return ans;
}
