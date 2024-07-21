template<class T>
size_t uniq(T *l, size_t n){
    sort(l,l+n);
    return unique(l,l+n) - l;
}