int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll N,M,Q;cin>>N>>M>>Q;
    init(N);
    vector<ll> A(Q),B(Q),C(Q);
    bool app1=false;
    set<ll> SE,T;
    
    for(int i=0;i<Q;i++){
        cin>>A[i]>>B[i]>>C[i];
        if(C[i]==0){
            unite(A[i],B[i]);
            SE.insert(A[i]);
            SE.insert(B[i]);
            
            //use.insert(A[i]);
            //use.insert(B[i]);
        }