int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    string s, t;
    cin >> s >> t;

    bool ans = false;
    rep(i, 110) {
        if(s == t) {
            ans = true;
        }