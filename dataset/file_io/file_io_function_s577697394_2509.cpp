int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N, Q;
    cin >> N >> Q;

    LazySegmentTree<ll> sst(N);

    REP(i, Q){
        int q;
        cin >> q;
        if (q == 0){
            int s, t, x;
            cin >> s >> t >> x;
            sst.update(s, t+1, x);

        }