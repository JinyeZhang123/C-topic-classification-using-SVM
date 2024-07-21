int main(){
 
     
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
 
   // ifstream fin("input.txt");ofstream fout("outut.txt");
    ll t,i,j,m,n,s,z,k,p;string s1,s2;ll q;ll x,y;
    fa[0]=iv[0]=1;
    lp(1,M-1){
    	fa[i]=fa[i-1]*i%md;fa[i]%=md;
    	iv[i]=iv[i-1]*exp(i,md-2)%md;iv[i]%=md;
    }