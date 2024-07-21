template <typename T>
struct doubling{
    int sz;
    vector <vector <T>> parents;
    vector <int> dep;
    doubling(UnWeightedGraph &g){
        sz = g.size();
        parents.resize(20), dep.resize(sz);
        rep(i, 20) parents[i].resize(sz);
        queue <tuple <int,int,int>> q;
        q.push(make_tuple(0, 0, 0)); //now, pre, depth
        while(!q.empty()){
            auto tmp = q.front(); q.pop();
            int now = get <0>(tmp), pre = get <1>(tmp), depth = get <2>(tmp);
            parents[0][now] = pre, dep[now] = depth;
            for(auto ne: g[now]) if(ne != pre) q.push(make_tuple(ne, now, depth+1));
        }