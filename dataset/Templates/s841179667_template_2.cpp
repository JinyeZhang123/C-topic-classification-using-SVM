template <typename T>
void SCC_dfsone(vector< vector< Edge<T> > > &G, int cur, vector<int> &v, vector<bool> &isthrough) {
    isthrough[cur] = true;
    for(auto x : G[cur]) {
        if(!isthrough[x.to]) {
            SCC_dfsone(G, x.to, v, isthrough);
        }