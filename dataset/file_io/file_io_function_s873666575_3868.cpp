int main() {
    #ifdef LOCAL
    ifstream in("../../Atcoder/input.txt");
    cin.rdbuf(in.rdbuf());
    #endif

    ll N,Q;
    cin>>N>>Q;
    vecl C(N);
    rep(i,N) {
        cin>>C[i];
    }