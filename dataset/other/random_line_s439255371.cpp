ll power(ll a,ll b){if(b==0) return 1;ll res=1;while(b>0){if(b&1) res *= a;a *= a;b >>=1;}return res;}
