int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    int min_pos = -1;
    int min_val = 0x7FFFFFF;
    rep(i, n) {
        cin >> a[i];
        if(a[i] == 1) {
            min_pos = i;
        }