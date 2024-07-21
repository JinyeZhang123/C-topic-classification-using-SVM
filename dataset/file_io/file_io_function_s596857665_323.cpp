int main() {
#ifdef FASTIO
    cin.tie(0), cout.tie(0);
    ios::sync_with_stdio(false);
#endif
#ifdef FILEINPUT
    ifstream ifs("./in_out/input.txt");
    cin.rdbuf(ifs.rdbuf());
#endif

    ll M;
    cin >> M;
    ll sum = 0;
    ll len = 0;
    for (ll i = 0; i < M; i++) {
        ll d, c;
        cin >> d >> c;
        len += c;
        sum += c * d;
    }