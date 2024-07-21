int main(){
 
     
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
 
   // ifstream fin("input.txt");ofstream fout("outut.txt");
    ll t,i,j,m,n,s,z,k,p;string s1,s2;ll q;ll x,y;
    cin>>n>>k;
    vii  v1,v2;
    lp(1,n)cin>>x,v1.pb(x);
    lp(1,n)cin>>x,v2.pb(x);
    
    vii ans(411);ans[0]=1;
    for(i=0;i<=400;++i){
    	for(j=0;j<=400;++j)dp[i][j]=exp(i,j)%md;
    }