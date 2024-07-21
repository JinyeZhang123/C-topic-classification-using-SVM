template<class T>
inline ostream &operator<<(ostream &out, vector<T> &a) {
    out << "[";
    fori (i, a.size())out << a[i] << vector<string>{", ", "]  "}