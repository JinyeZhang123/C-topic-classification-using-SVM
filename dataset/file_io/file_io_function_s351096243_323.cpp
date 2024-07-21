int main() {
#ifdef FASTIO
    cin.tie(0), cout.tie(0);
    ios::sync_with_stdio(false);
#endif
#ifdef FILEINPUT
    ifstream ifs("./in_out/input.txt");
    cin.rdbuf(ifs.rdbuf());
#endif

    int N, K;
    cin >> N >> K;
    vector<Pii> ps(N);
    for (int i = 0; i < N; i++) {
        cin >> ps[i].first >> ps[i].second;
    }