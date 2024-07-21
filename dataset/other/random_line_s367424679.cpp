ll power(ll b,ll e,ll MOD=mod){ll ans=1; while(e){if(e%2) ans=(ans*b)%MOD; b=(b*b)%MOD; e/=2;} return ans;}
