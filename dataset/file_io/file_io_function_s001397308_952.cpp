int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N;
    cin >> N;
    string S;
    cin >> S;

    using P = pair<string, string>;
    map<P, ll> mp;

    REP(i, 1 << N){
        string a, b;
        REP(n, N){
            if (i >> n & 1){
                a += S[n];
            }