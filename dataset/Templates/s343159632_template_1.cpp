template<typename V> class segtree{
private:
    int n,sz; vector<V> node; vector<int> node_id;
public:
    void resize(vector<V> v){
        sz = (int)v.size(); n = 1;
        while(n < sz) n *= 2;
        node.resize(2*n-1),node_id.resize(2*n-1);
        rep(i,sz){
            node[i+n-1] = v[i];
            node_id[i+n-1] = i;
        }