int main() {
#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    const int slot = 10;
    int n;
    cin >> n;
    int f[101][100];
    rep(i, n) {
        rep(j, 10) { cin >> f[i][j]; }