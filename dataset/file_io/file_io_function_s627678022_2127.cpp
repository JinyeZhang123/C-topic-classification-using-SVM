int main(){
 
     
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
   // ifstream fin("input.txt");ofstream fout("outut.txt");
    ll t,i,j,m,n,s,z,k,p;string s1,s2;ll q;ll x,y;
    cin>>n>>t;
    vii v(n);
    vii mx(n);
    lp(0,n-1)cin>>v[i];
    mx[n-1]=v[n-1];
    for(i=n-2;i>=0;--i){
      mx[i]=max(v[i],mx[i+1]);
    }