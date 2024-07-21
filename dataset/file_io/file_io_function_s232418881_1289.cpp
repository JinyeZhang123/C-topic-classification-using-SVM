int main() {

//    ifstream cin("C:\\Users\\riku\\Downloads\\subtask01-03.txt");

    ll n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    ll l = lcm(n, m);

    map<ll, char> x;

    rep(i, n) x[l / n * i] = s[i];

    rep(i, m) x[l / m * i] = t[i];

    rep(i, n) if (x[l / n * i] != s[i]) {
            cout << -1 << endl;
            ret();
        }