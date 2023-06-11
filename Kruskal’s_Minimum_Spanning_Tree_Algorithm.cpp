#include <bits/stdc++.h> 
class dsu{
	public:
	vector<int>p, s;
	dsu(int n){
		s.resize(n+1);
		p.resize(n+1, 0);
		for(int i=0; i<n+1; i++){
			p[i]=i;
		}
	}
	int findp(int u){
		if(p[u]==u){return u;}
		return p[u]=findp(p[u]);
	}
	void un(int u, int v){
		p[findp(u)]=findp(v);
	}
};
int kruskalMST(int n, int m, vector<vector<int>> &graph) {
	// Write your code here.
	vector<pair<int, pair<int, int>>>v;
	for(auto it: graph){
		v.push_back({it[2], {it[0]-1, it[1]-1}});
	}
	sort(v.begin(), v.end());
	dsu d(n);
	int ans=0;
	for(int i=0; i<m; i++){
		if(d.findp(v[i].second.first)!=d.findp(v[i].second.second)){
			ans+=v[i].first;
			d.un(v[i].second.first, v[i].second.second);
		}
	}
	return ans;
}
