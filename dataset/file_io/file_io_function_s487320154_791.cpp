int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    make();
    
    int N,X,Y;cin>>N>>X>>Y;
    vector<int> A(N),B(N),mini(N,INF),okcolor(N),can(N);
    for(int i=0;i<N;i++){
        cin>>A[i]>>B[i];
        A[i]--;
        chmin(mini[A[i]],B[i]);
    }