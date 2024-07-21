int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    make();
    int H,W,N;cin>>H>>W>>N;
    H--;W--;
    
    vector<pair<int,int>> S(N);
    for(int i=0;i<N;i++){
        int a,b;cin>>a>>b;
        a--;b--;
        S[i]=mp(a,b);
    }