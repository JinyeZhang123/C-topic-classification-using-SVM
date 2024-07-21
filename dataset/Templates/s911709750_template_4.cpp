template<typename T1, typename T2>
ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
    os << "{";
    int a = 0;
    for (auto &tp : mp) {
        if (a) os << ", "; a = 1;
        os << tp;
    }