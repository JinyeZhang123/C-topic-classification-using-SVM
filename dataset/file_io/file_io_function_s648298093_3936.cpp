int main() {
#ifdef LOCAL
    ifstream in("../line_2.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N, M, S;
    cin >> N >> M >> S;

    Graph g(N);
    REP(i, M){
        int u, v, a, b;
        cin >> u >> v >> a >> b;
        u--; v--;
        g.add_edge(u, v, a, b);
    }