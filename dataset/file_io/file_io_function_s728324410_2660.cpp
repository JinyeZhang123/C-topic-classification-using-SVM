int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int n, m, X, Y;
    cin >> n >> m >> X >> Y;
    vector<int> x(n), y(m);

    rep(i, n) cin >> x[i];
    sort(x.begin(), x.end());
    rep(i, m) cin >> y[i];
    sort(y.begin(), y.end());

    for(int i = -100; i <= 100; i++) {
        if(X < i && i <= Y) {
            if(x.back() < i && i <= y.front()) {
                cout << "No War";
                return 0;
            }