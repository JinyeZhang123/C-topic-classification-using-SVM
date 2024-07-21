int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N,Q;cin>>N>>Q;
    
    LazySegmentTree<pair<ll,int>,ll> seg(N,
                                         [](pair<ll,int> a,pair<ll,int> b){return make_pair(a.first+b.first,a.second+b.second);}