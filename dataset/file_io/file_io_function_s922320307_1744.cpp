int main() {
#ifdef LOCAL
    ifstream in("../arg.txt");
    cin.rdbuf(in.rdbuf());
#endif

    cin >> N;
    REPN(i, 1, N) {
        int p; cin >> p;
        G[--p].emplace_back(i);
    }