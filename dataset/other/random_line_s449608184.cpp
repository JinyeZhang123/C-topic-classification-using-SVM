ll intpow(ll a, ll n, ll _mod=numeric_limits<ll>::max()) { ll p=1; while (n) { if (n&1) p=p*a%_mod; a=a*a%_mod; n>>=1; } return p; } 
