template <typename T1, typename T2, typename T3>
ostream &operator<<(ostream &os, const tuple<T1, T2, T3> &t) {
  return os << '(' << get<0>(t) << ", " << get<1>(t) << ", " << get<2>(t)
            << ')';
}