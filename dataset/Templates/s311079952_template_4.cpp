template<class T> int latter(const vector<T> &v, T x){
    return lower_bound(v.begin(),v.end(),x) - v.begin();
}