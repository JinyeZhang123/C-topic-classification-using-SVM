	ll ans=1;while(k) {if(k&1) ans=ans*x%mod;x=x*x%mod;k>>=1;}return ans;
