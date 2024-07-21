int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int X,Y,Z;cin>>X>>Y>>Z;
    int N=X+Y+Z;
    vector<ll> A(N),B(N),C(N);
    ll sum=0;
    for(int i=0;i<N;i++){
        cin>>A[i]>>B[i]>>C[i];
        sum+=A[i];
        B[i]-=A[i];
        C[i]-=A[i];
    }