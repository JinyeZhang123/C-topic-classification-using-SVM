template <typename T>
ostream &operator<<(ostream &os, set<T> &s) {
    if (s.size()) {
        auto si = s.begin();
        os << *si;
        for (si++; si != s.end(); si++)
            os << " " << *si;
    }