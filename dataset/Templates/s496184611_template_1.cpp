template<class Abel> struct RMQ_RAQ_STLP{//[0,STLP.n)
    vector<Abel> dat,lazy_val;
    vector<bool> lazy;
    long long n;
    Abel unity;

    RMQ_RAQ_STLP(long long n_origin, Abel SUM_UNITY){
        unity=SUM_UNITY;
        long long i=0;
        while(n_origin>(1<<i)) i++;
        n = (1<<i);
        dat.resize(2*n -1);
        lazy_val.resize(2*n-1);
        lazy.resize(2*n-1);
        for(i=0; i< 2*n -1; i++){
            dat[i]=SUM_UNITY;
            lazy_val[i]=SUM_UNITY;
            lazy[i]=0;
        }