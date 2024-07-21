int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    make();
    
    int N,q;cin>>N>>q;
    string S;cin>>S;
    vector<pair<int,int>> Q;
    while(q--){
        int s,t;cin>>s>>t;
        if(Q.size()==0) Q.push_back({s,t}