int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    vector<int> A(N),B(N),used(N);
    int sub=0;
    map<int,int> MA;
    for(int i=0;i<N;i++){
        cin>>A[i];
        sub^=A[i];
        MA[A[i]]++;
    }