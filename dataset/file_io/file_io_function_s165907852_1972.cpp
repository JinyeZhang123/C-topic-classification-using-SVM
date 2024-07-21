int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int n, m, x;
    cin >> n >> m >> x;
    map<int, int> a;
    rep(i, m) {
        int tmp;
        cin >> tmp;
        a[tmp]++;
    }