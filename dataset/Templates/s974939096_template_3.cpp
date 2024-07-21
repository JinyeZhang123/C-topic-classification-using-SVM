template<class T>
int merge_sort(T* xs, int l, int r){
    int cnt = 0;
    if(l+1 < r){
        int mid = (l+r)/2;
        cnt += merge_sort(xs, l, mid);
        cnt += merge_sort(xs, mid, r);
        cnt += merge(xs, l, mid, r);
    }