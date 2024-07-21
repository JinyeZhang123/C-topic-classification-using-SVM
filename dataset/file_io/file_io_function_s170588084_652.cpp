int main(){
   int n; scanf("%d",&n);
   vector<ll> a(n); rep(i,0,n)scanf("%lld",&a[i]);
   //ifstream in("test.txt"); in>>n; a.resize(n); rep(i,0,n)in>>a[i];
   rep(j,0,mx+1)pos[n-1][j]=neg[0][j]=j;
   rrep(i,n-2,-1){
      ll s=1;
      rep(j,0,mx+1){
         int lg=0; ll t=1;
         while(a[i]*s>a[i+1]*t)t*=4,lg++;
         if(lg<=mx)pos[i][j]=pos[i+1][lg]+j;
         else pos[i][j]=pos[i+1][mx]+j+(n-i-1)*(lg-mx);
         s*=4;
      }