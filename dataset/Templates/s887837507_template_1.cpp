template <typename T>
ostream &jout(T s, T e, string sep = " ", ostream &os = cout) {
  if (s != e) {
    os << *s;
    ++s;
  }