int main()
  {
      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
      // ifstream cin("input.txt");
      
      
      cin>>n>>m>>k;
      vector<int> h;
      good = vector<vector<int> > (n+1, h);
      bad = vector<vector<int> > (n+1, h);
      visited = vector<bool> (n+1);
      for (int tt = 0;tt<m;tt++){
        int x,y;
        cin>>x>>y;
        good[x].push_back(y);
        good[y].push_back(x);
      }