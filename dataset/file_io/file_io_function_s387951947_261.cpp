int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");
    int n, m;
    cin >> n >> m;
    for(int i = 1;i <= n;i++)num[i] = 1;
    have[1] = 1;
    for(int i = 1;i <= m;++i){
        int u,v;
        cin >> u >> v;
        num[u]--;
        num[v]++;
        if(have[u])have[v] = 1;
        if(!num[u])have[u] = 0;
    }