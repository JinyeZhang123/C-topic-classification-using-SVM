template <typename T>
struct RAQ{
    int n = 1;
    vector<T> raq,lazy;     // 0 indexed

    RAQ(vector<T> v){
        int sz = v.size();
        while(n<sz) n*=2;
        raq.resize(2*n+10); lazy.resize(2*n+10);

        for(int i=0;i<sz;i++) raq[i+n-1] = v[i];
        for(int i=n-2;i>=0;i--) raq[i] = raq[i*2+1] + raq[i*2+2];
    }