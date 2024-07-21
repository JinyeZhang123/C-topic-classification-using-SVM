int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));

    vector<int> y1(h * w), x1(h * w), y1d(h * w), x1d(h * w);
    int n = 0;

    rep(i, h) {
        rep(j, w) { cin >> a[i][j]; }