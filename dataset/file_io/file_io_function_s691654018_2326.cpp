int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    cin>>H>>W;
    vector<string> S(H);
    for(int i=0;i<H;i++) cin>>S[i];
    
    vector<int> used(W);
    vector<pair<int,int>> p;
    if(DFS(S,used,p)) cout<<"YES\n";
    else cout<<"NO\n";
}