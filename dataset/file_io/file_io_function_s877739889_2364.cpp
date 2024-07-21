int main(){
 
     
    // ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
 
   // ifstream fin("input.txt");ofstream fout("outut.txt");
    ll t,i,j,m,n,s,z,k,p;string s1,s2;ll q;ll x,y;ll h;
    iv[0]=1;
    cin>>n;
    md=n;
    lp(1,4999)iv[i]=iv[i-1]*exp(i,md-2)%md,iv[i]%=md;
    vii v;
    lp(1,n){
    	cin>>x;v.pb(x);
    }