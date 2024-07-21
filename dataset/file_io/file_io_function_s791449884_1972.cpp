int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int n;
    cin >> n;
    vector<ll> a(n + 2, 0);
    rep(i, n) { cin >> a[i + 1]; }