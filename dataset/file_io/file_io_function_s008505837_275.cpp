int main(){
    //ifstream cin(NAME".inp");
    //ofstream cout(NAME".out");
    int n,m;
    cin>>n>>m;
    adj  = vector< vector<int > >(n+1);
    int u,v;
    for(int i = 0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }