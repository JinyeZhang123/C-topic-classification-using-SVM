int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int n;
    cin >> n;
    vector<int> x(n), xori(n);
    rep(i, n) {
        cin >> xori[i];
        x[i] = xori[i];
    }