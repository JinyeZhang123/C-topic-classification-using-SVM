int main(){
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    int N; cin>>N;
    vector<pair<int,int>> Edge;
    vector<vector<int>> G(N);
    rep(i,0,N-1){
        int a,b; cin>>a>>b;
        Edge.emplace_back(a-1,b-1);
        G.at(a-1).push_back(b-1);
        G.at(b-1).push_back(a-1);
    }