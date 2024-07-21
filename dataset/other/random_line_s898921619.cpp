USE2(T,...Ts)auto ndvec(T v,int n,Ts...ns)->vec<decltype(ndvec(v,ns...))>{return ndvec(ndvec(v,ns...),n);}
