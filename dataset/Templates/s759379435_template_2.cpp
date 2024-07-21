template<typename T> ostream& operator<<(ostream& s, const vector<T>& v) {
    s << "[";
    for (int i = 0; i < v.size(); i++) s << (i == 0 ? "" : ", ") << v[i];
    s << "]";
    return s;
}