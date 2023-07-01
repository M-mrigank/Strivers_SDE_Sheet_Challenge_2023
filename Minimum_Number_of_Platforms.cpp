bool static comp(pair<int,int> a, pair<int,int> b){
    if(a.first != b.first){
        return a.first < b.first;
    } else return a.second < b.second;
}
int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<pair<int,int>> v;
    for(int i = 0;i<n;i++){
        v.push_back({at[i], dt[i]});
    }
    sort(v.begin(), v.end(), comp);
    int platforms = 1;
    pq.push(v[0].second);
    for(int i = 1; i < n; ++i){
        if(v[i].first > pq.top()){
            pq.pop();
        } else {
            platforms++;
        }
        pq.push(v[i].second);
    }
    return platforms;
}
