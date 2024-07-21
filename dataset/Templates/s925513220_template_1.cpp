template<std::size_t N>
  void Init(int (&ps)[N]) {
    for(int i = 0; i < (int)N; ++i) ps[i] = i;
  }