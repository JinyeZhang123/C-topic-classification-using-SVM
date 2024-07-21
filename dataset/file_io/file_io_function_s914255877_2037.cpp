int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int n;
    string s;
    cin >> n >> s;

    map<char, int> l, r;

    int ans = 0;
    rep(i, n) {
        l.clear();
        r.clear();
        rep(j, i) { l[s[j]]++; }