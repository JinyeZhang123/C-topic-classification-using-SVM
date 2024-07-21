inline int Pow(int x,int y) { int res=1; for(;y;y>>=1,x=x*(ll)x%mod) if(y&1) res=res*(ll)x%mod; return res; }
