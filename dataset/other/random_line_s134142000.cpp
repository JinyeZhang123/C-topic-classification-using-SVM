USE2(T,U=withi<T>)vec<U>zipi(const vec<T>&x,int s=0){int N=x.size();vec<U>v;v.reserve(N);rep(i,N)v.pb(x[i],s+i);return v;}
