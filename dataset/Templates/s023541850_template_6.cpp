template<class T>
size_t uniq(vector<T> &v){
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    return v.size();
}