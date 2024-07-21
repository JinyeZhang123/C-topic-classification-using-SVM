int main()
  {
      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
      // ifstream cin("input.txt");


 int n;
 cin>>n;
 vector<int> a(n);
 for (int i = 0;i<n;i++) cin>>a[i];
  int i = 0;
int f = 1;
while(i<n){
  while (i<n && a[i]!=f) i++;
  if (i==n){
    if (f==1) f=n+2;
    cout<<n-(f-1)<<"\n";
    // cout<<f<<endl;
    return 0;
  }