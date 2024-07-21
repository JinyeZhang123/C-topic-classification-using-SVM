int main() {
#ifdef FASTIO
    cin.tie(0), cout.tie(0);
    ios::sync_with_stdio(false);
#endif
#ifdef FILEINPUT
    ifstream ifs("./in_out/input.txt");
    cin.rdbuf(ifs.rdbuf());
#endif
#ifdef FILEOUTPUT
    ofstream ofs("./in_out/output.txt");
    cout.rdbuf(ofs.rdbuf());
#endif

    cin >> N >> M >> P;
    g.resize(N);
    rg.resize(N);
    for (ll i = 0; i < M; i++) {
        ll ai, bi, ci;
        cin >> ai >> bi >> ci;
        --ai, --bi;
        g[ai].emplace_back(bi, P - ci);
        rg[bi].emplace_back(ai, P - ci);
    }