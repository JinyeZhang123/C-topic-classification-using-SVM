int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N, Q;
    cin >> N >> Q;

    auto g = LCA(N);
    REP(i, N-1){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        a--; b--; c--;
        g.add_edge(a, b, c, d);
    }