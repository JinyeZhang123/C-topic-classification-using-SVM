int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int a, b, c, k;
    cin >> a >> b >> c >> k;
    int ans = 0;
    rep(i, k + 1) {
        rep(j, k + 1) {
            rep(l, k + 1) {
                if(i + j + l != k)
                    continue;
                ans = max(ans,
                          int(a * pow(2, i) + b * pow(2, j) + c * pow(2, l)));
            }