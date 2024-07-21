template<class T>
long merge(T* xs, int l, int m, int r){
    long cnt = 0;
    auto temp = new T[r-l];
    int c1 = l, c2 = m;
    int idx = 0;

    while(c1 < m || c2 < r){
        if(c1 == m){
            temp[idx] = xs[c2++];
        }