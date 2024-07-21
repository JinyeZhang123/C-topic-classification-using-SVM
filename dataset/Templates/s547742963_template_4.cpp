template <typename T>
  RollingHash_MultiBase(const vector<T>& s, Array bs) : bases(bs) {
    for (size_t i = 0; i < SIZE; i++) rhs[i] = RollingHash(s, bases[i]);
  }