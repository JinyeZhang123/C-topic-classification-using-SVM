ll power(ll x,ll y){ll res=1; while(y>0){if(y&1) res=(res*x)%INF;y=y>>1;x=(x*x)%INF;}return res%INF;} // modular exponent
