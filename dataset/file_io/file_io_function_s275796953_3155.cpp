int main() {
    #ifdef LOCAL
    ifstream in("../../Atcoder/input.txt");
    cin.rdbuf(in.rdbuf());
    #endif


    cin>>N;

    A = vecl(N);
    rep(i,N) {
        cin>>A[i];
    }