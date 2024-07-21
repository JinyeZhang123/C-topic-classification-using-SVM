template<class T0, class T1, class T2, class T3>
inline ostream &operator<<(ostream &out, tuple<T0, T1, T2, T3> &a) {
    return out << "{" << get<0>(a) << ", " << get<1>(a) << ", " << get<2>(a) << ", " << get<3>(a) << "}