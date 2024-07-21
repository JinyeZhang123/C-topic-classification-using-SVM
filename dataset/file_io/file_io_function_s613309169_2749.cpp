int main() {
    #ifdef LOCAL
    ifstream in("../../Atcoder/input.txt");
    cin.rdbuf(in.rdbuf());
    #endif

    ll N,K;
    cin >> N >> K;

    vecl A(N);
    rep(i,N) {
        cin>>A[i];
    }