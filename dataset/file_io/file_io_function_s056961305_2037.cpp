int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int h, w;
    cin >> h >> w;
    vector<vector<char>> s(h, vector<char>(w, '.'));
    rep(i, h) {
        rep(j, w) { cin >> s[i][j]; }