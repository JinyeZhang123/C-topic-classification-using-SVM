template<class T, class ...Args>
  inline void read(T &x, Args&... args) {read(x); read(args...);}