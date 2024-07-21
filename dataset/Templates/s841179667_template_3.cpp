template <typename T>
void SCC_dfstwo(vector< vector< Edge<T> > > &rG, int cur, vector<int> &w, int k, vector<bool> &isthrough) {
    w[cur] = k;
    isthrough[cur] = true;
    for(auto x : rG[cur]) {
        if(!isthrough[x.to]) {
            SCC_dfstwo(rG, x.to, w, k, isthrough);
        }