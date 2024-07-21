int main(){
 
     
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
 
   // ifstream fin("input.txt");ofstream fout("outut.txt");
    ll t,i,j,m,n,s,z,k,p;string s1,s2;ll q;ll x,y;
    cin>>x>>y;
    vii a,b;
    memset(dp,-1,sizeof(dp));
    while(x){
    	a.pb(x%2);x/=2;
    }