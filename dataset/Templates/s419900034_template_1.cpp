template<typename T>
struct LazyRangeSum{
    int n;
    vector<T> dat, lazy;

    LazyRangeSum(vector<T> v){
        int sz = (int)v.size();
        n = 1;
        while(n < sz) n <<= 1;
        dat.resize(2*n-1,0);
        lazy.resize(2*n-1,0);

        for(int i=0;i<sz;i++) dat[i+n-1]=v[i];
        for(int i=n-2;i>=0;i--) dat[i]=dat[i*2+1]+dat[i*2+2];
    }