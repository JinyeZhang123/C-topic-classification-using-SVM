int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    string S;cin>>S;
    int N=si(S);
    
    if(si(S)==1){
        if(S=="?"||S=="1") cout<<1<<endl;
        else cout<<0<<endl;
        return 0;
    }