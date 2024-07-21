template <class T, class U>
inline void dump(map<T, U>& v) {
    irep(i, v) { cout << i->first << " " << i->second << '\n'; }