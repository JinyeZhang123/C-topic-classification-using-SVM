int main()
  {
      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     // fstream cin("text.txt");

      int n;
      cin>>n;
      vector<vector<pair<int,int>>> adj(n+1, vector<pair<int,int>>(0));
      int m;
      cin>>m;
      set<pair<int,int>> edges;
      for (int i = 0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back({b,c}