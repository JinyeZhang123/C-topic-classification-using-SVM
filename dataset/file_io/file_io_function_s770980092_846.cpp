int main() {
//    ifstream cin("C:\\Users\\riku\\Downloads\\in01.txt");
    int n;
    cin >> n;
    vector<ll> as(n), bs(n);
    for (ll &l:as)cin >> l;
    for (ll &l:bs)cin >> l;

    auto get = [&](int i) -> ll {
        return bs[(i + n) % n];
    }