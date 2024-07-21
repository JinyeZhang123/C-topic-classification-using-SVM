int main() {
    #ifdef LOCAL
    ifstream in("../../Atcoder/input.txt");
    cin.rdbuf(in.rdbuf());
    #endif

    ll N,T;
    cin>>N>>T;

    vecl A(N),B(N);
    rep(i,N) {
      cin>>A[i]>>B[i];
    }