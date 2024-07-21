int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    
    int N;cin>>N;
    vector<long double> A(N+2,INF),B(N+2,INF);
    vector<ll> a(N+2,0),b(N+2);
    for(int i=0;i<N;i++){
        long double c;cin>>c;
        A[i+1]=log2(c)+1.0;
        B[i+1]=log2(c);
        a[i+1]++;
    }