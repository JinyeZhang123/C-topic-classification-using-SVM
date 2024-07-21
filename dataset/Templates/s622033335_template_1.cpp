template<class T>
ostream &operator<<(ostream &os, const vector<T> &v){
        os << "[";
        FOR(it, v) os << *it << ", ";
        return os << "]";
}