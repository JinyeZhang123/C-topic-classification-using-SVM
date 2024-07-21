int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N;
    cin >> N;
    vector<int> A(N), B(N);
    REP(i, N) cin >> A[i];
    REP(i, N) cin >> B[i];

    int j=0,bef=-1;
    REP(i,N){
        if(bef!=A[i])j=0;
        if(A[i]==B[i]){
            for(;j<N;j++){
                if(A[j]!=A[i]&&B[j]!=A[i]){
                    swap(B[i],B[j]);
                    break;
                }