template<class T>
int merge(T* xs, int l, int m, int r){
    int cnt = 0;
    int temp[r-l];
    int c1 = l;
    int c2 = m;
    int idx = 0;
    while(c1 < m || c2 < r){
        if(c1 == m){
            temp[idx] = xs[c2++];
        }