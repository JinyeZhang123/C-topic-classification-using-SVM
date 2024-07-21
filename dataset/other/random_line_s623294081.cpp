inline int qpow(int x,int sq){int res=1;for(;sq;x=mul(x,x),sq>>=1)if(sq&1)res=mul(res,x);return res;}
