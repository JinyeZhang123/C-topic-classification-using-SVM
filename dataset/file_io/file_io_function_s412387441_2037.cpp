int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> accu_w(n + 1, 0);
    vector<int> accu_e(n + 1, 0);
    rep(i, n) {
        if(s[i] == 'W') {
            accu_w[i + 1] = accu_w[i]+1;
            accu_e[i + 1] = accu_e[i];
        }