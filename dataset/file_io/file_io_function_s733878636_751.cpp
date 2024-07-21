int main()
  {
      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
      // ifstream cin("input.txt");

     int n,k;
     cin>>n>>k;
     vector<int> a(n);
     for (int i = 0;i<n;i++) cin>>a[i];
      vector<ll> pref(n);
   
    pref[0] = a[0];
    for (int i = 1;i<n;i++) pref[i] = pref[i-1] + a[i];
       lld ans = lld((k+pref[k-1]))/2;
    for (int i = k;i<n;i++){
      ll sum = pref[i] - pref[i-k];
      ans = max(ans, (lld(k)+sum)/2);
    }