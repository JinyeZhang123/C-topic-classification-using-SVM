template<class T> struct LSMIN{
    int n;
    T e;
    vector<T> dat,lazy;
    vector<bool> vis;

    LSMIN(T n_,T e_){
        n=1;e=e_;
        while(n<n_) n*=2;
        dat.resize(2*n-1,e);
        lazy.resize(2*n-1,e);
        vis.resize(2*n-1);
    }