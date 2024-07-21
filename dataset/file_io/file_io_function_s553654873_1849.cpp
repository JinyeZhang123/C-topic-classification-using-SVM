int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    // ifstream cin(".in");

    string s;
    cin >> s;
    n = s.size();
    fori (i, n) A[i] = s[i] - '0', digits[A[i]].insert(i);
    ll ans = 1;
    fori (i, n - 1) {
        ll k = maxn;
        fori (d, 10) if (d != A[i]) {
            auto it = digits[d].lower_bound(i);
            if (it != digits[d].end()) smin(k, *it);
        }