template <class T>
set<T> intersection(const set<T>& sa, const set<T>& sb) {
    set<T> ret;
    for (T a : sa) {
        if (sb.find(a) != sb.end()) {
            ret.insert(a);
        }