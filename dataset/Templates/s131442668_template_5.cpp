template<class T1, class T2>
ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
    os << "[";
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        if (it != mp.begin()) {
            os << ", ";
        }