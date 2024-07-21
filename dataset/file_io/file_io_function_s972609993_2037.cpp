int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif
    ll a, b;
    cin >> a >> b;
    ll d = b - a;

    ll l = 1;
    ll r = 1 + 2;
    ll ans = 0;

    repi(i, 3, 1001) {
        if(d == r - l) {
            cout << r - b;
            break;
        }