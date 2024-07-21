int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int n, t;
    cin >> n >> t;

    int ans = 0x7FFFFFFF;
    rep(i, n) {
        int ctmp, ttmp;
        cin >> ctmp >> ttmp;
        if(ttmp <= t)
            chmin(ans, ctmp);
    }