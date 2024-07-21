int main() {
    #ifdef LOCAL
    ifstream in("../../Atcoder/input.txt");
    cin.rdbuf(in.rdbuf());
    #endif

    ll N;
    cin>>N;

    vector<double> P(N);
    rep(i,N) {
      cin>>P[i];
    }