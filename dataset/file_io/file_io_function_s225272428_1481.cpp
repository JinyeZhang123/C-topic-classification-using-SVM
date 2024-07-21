int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll X,K;cin>>X>>K;
    vector<ll> ti(K+1,0);
    SegmentTree<fn> seg(K,
                        [](fn a,fn b){
                            fn ret;
                            ret.a=a.a+b.a;
                            ret.lo=min(max(a.lo+b.a,b.lo),b.hi);
                            ret.hi=min(max(a.hi+b.a,b.lo),b.hi);
                            return ret;
                        }