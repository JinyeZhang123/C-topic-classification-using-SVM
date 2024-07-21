int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int N, X;
    cin >> N >> X;

    vector<ll> x(N);
    rep(i, N) {
        ll tmp;
        cin >> tmp;
        x[i] = abs(X-tmp);
    }