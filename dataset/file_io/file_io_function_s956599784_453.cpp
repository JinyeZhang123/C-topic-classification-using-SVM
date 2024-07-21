int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    vector<ll> A(N),B(N);
    cin>>A[0];
    for(int i=1;i<N;i++){
        char c;cin>>c;
        if(c=='-') B[i]=1;
        cin>>A[i];
    }