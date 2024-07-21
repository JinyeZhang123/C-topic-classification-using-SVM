int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    map<int, int> m;
    int n, k;
    cin >> n >> k;
    rep(i, n) {
        int tmp;
        cin >> tmp;
        m[tmp]++;
    }