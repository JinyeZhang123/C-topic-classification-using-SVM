int main()
  {
      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
      // ifstream cin("input.txt");

      string s;
      cin>>s;
      int k;
      cin>>k;
      int f = s[0] - '0';

       int n = s.length();
       if (n<k){
        cout<<"0\n";
        return 0;
       }