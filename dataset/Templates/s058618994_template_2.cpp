template<class T0, class T1>
inline istream &operator>>(istream &in, pair<T0, T1> &a) {
    return in >> a.first >> a.second;
}