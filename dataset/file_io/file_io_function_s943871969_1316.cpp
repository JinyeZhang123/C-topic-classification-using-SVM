int main() {
#ifdef MYLOCAL
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
#endif

    int N, M; cin >> N >> M;
    UnionFind<int> uf(N);
    for (int i = 0; i < M; ++i) {
        int l, r, d;
        cin >> l >> r >> d;
        --l, --r;
        if (uf.issame(l, r)) {
            int diff = uf.diff(l, r);
            if (diff != d) {
                cout << "No" << endl;
                return 0;
            }