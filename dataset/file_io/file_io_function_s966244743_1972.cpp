int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    ll n, m;
    cin >> n >> m;

    ll ans = 0;

    if(n == 1 && m == 1) {
        ans = 1;
    }