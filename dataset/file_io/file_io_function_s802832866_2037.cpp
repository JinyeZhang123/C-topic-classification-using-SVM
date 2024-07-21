int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif
    int n;
    cin >> n;
    int ans = 0;
    vector<int> a(n);
    rep(i, n) {
        cin >> a[i];
        int tmp = a[i];
        while(tmp!=0) {
            if(tmp % 2 == 0) {
                tmp /= 2;
                ans++;
            }