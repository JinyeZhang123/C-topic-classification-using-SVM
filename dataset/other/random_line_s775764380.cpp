inline int ksc(int x,int p) { int res=1; for(;p;p>>=1, x=x*x%Mod) if(p&1ll) res=res*x%Mod; return res; }
