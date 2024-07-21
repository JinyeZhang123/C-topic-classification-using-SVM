int main()
  {
      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     // fstream cin("text.txt");

      int n;
      cin>>n;
      char a[n][n];
      bool ok = false;
      for (int x = 0; x<n;x++){
        for (int y = 0;y<n;y++){
          cin>>a[x][y];
          if (a[x][y]=='#') ok = true;
        }