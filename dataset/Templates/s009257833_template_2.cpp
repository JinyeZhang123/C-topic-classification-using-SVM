template<class T> const ostream& operator<<(ostream& out, const vector<T>& v){
    times(v.size(), i) out << (i ? " " : "") << v[i];
    return out;
}