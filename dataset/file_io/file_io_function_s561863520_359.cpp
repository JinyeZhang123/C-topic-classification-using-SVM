int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    vector<int> A(N+1);
    for(int i=0;i<N;i++){
        cin>>A[i+1];
        A[i+1]^=A[i];
        cnt0[i+1]=cnt0[i];
        
        if(A[i+1]==0){
            cnt0[i+1]++;
        }