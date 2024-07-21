ll modpow(ll a, ll n=mo-2) {ll r=1;while(n)r=r*((n%2)?a:1)%mo,a=a*a%mo,n>>=1;return r;}
