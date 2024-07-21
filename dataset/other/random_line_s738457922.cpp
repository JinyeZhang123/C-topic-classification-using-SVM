inline ll qpow(ll x,ll y){ll ans=1;while(y){if(y&1) ans=ans*x%modn;x=x*x%modn;y>>=1;}return ans;}
