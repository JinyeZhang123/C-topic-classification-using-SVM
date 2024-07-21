int main() {
#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif
    int n, z, w;
    cin >> n >> z >> w;
    vector<int> a(n);
    rep(i, n) { cin >> a[i]; }