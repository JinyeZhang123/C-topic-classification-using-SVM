template<class T> istream& operator>>(istream& in, vector<T>& v) {
    times(v.capacity(), i) in >> v[i];
    return in;
}