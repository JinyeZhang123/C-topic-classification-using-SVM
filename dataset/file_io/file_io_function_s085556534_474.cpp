int main() {
#ifdef FASTIO
    cin.tie(0), cout.tie(0);
    ios::sync_with_stdio(false);
#endif
#ifdef FILEINPUT
    ifstream ifs("./in_out/input.txt");
    cin.rdbuf(ifs.rdbuf());
#endif

    ll N;
    cin >> N;
    vector<Point> ps(N, Point(2));
    for (ll i = 0; i < N; i++) {
        cin >> ps[i][0] >> ps[i][1];
    }