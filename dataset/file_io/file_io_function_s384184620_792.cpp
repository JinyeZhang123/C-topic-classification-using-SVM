int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    string S;cin>>S;
    int N=si(S);
    vector<int> dd;
    for(int i=1;i*i<=N;i++){
        if(N%i==0){
            dd.push_back(i);
            if(i*i!=N) dd.push_back(N/i);
        }