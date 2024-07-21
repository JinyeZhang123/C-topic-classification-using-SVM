template<class T>
long inversion(T* xs, int l, int r){
    long cnt = 0;
    if(l+1 < r){
        int m = (l+r)/2;
        cnt += inversion(xs, l, m);
        cnt += inversion(xs, m, r);
        cnt += merge(xs, l, m, r);
    }