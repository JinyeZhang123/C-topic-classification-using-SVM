int main(){
 
     
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
 
   // ifstream fin("input.txt");ofstream fout("outut.txt");
    ll t,i,j,m,n,s,z,k,p;string s1,s2;ll q;ll x,y;
    cin>>n>>s1;m=s1.size();
    dp[0][0]=1;

    for(i=1;i<=n;++i){
      ll s=0,o=1;
      if(i%2)swap(s,o);
      ll ans;
      for(j=0;j<=i;++j){
        ans=0;
        ans=ans+dp[o][max(0ll,j-1)]%md;ans%=md;
        ans=ans+2*dp[o][j+1]%md;
        ans%=md;
        dp[s][j]=ans;
      }