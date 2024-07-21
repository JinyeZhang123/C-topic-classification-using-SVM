template<typename T>
vector<T> build_segtree(function<T(T,T)>f,T unit,const vector<T> &v){
    size_t n=1;
    while(n<v.size()){n<<=1;}