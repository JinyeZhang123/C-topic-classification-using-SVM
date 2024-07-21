template<typename T> void Unique(vector<T> &v){
    sort(all(v)), v.resize(distance(v.begin(), unique(all(v))));
}