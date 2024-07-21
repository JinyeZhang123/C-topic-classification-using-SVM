int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int n, d, x;
    cin >> n >> d >> x;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int eaten = 0;
    for(int day = 1; day <= d; day++) {
        rep(i, n) {
            rep(j, d) {
                if(day == j * a[i] + 1)
                    eaten++;
            }