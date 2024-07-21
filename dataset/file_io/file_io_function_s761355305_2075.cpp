int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N, E;
    cin >> N >> E;

    SCC g(N);
    REP(i, E){
        int s, t;
        cin >> s >> t;
        g.add_edge(s, t);
    }