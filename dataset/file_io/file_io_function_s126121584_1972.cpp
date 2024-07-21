int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int n, x;
    cin >> n >> x;
    vector<int> m(n);

    rep(i, n) { cin >> m[i]; }