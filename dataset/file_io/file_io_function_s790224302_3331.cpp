int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int n;
    cin >> n;

    int a[100][100];
    rep(i, 2) {
        rep(j, n) { cin >> a[i][j]; }