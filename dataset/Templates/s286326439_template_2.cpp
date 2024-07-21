template <class T1, class T2> bool chmax(T1 &l, const T2 &r) {
  return (l < r) ? (l = r, true) : false;
}