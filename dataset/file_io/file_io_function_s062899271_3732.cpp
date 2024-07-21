int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int n;
    cin >> n;
    int t[100001], x[100001], y[100001];
    t[0] = x[0] = y[0] = 0;
    rep(i, n) { cin >> t[i + 1] >> x[i + 1] >> y[i + 1]; }