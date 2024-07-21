int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    string s;
    cin >> s;
    int k;
    cin >> k;

    map<string, int> m;
    rep(i, s.size()) {
        string tmp;
        rep(j, 6) {
            tmp = s.substr(i, j + 1);
            m[tmp]++;
        }