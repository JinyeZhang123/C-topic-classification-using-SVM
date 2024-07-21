template <class T1, class T2> void vadd(vector<T1> &v, T2 x) {
  for (auto &s : v)
    s += T2(x);
}