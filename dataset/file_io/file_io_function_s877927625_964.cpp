int main() {
#ifdef FASTIO
    cin.tie(0), cout.tie(0);
    ios::sync_with_stdio(false);
#endif
#ifdef FILEINPUT
    ifstream ifs("./in_out/input.txt");
    cin.rdbuf(ifs.rdbuf());
#endif

    cin >> N >> K;
    kibou.resize(N);
    for (ll i = 0; i < N; i++) {
        int x, y;
        char c;
        cin >> x >> y >> c;
        if (c == 'B') {
            x += K;
        }