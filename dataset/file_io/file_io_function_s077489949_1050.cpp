int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N;
    cin >> N;

    vector<vector<int>> colors;
    colors.assign(N, vector<int>(4,0));

    using Color = pair<P, P>;
    map<Color, int> mp;

    REP(i, N){

        vector<int>& C = colors[i];
        REP(j, 4) cin >> C[j];

        // 2週にしとく
        REP(j, 4) C.emplace_back(C[j]);

        REP(j, 4) {
            Color c{{C[j], C[j+1]}