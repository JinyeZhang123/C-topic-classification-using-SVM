template<class T, class ...Args>
  inline void write(T x, Args... args) {write(x); putc(' '); write(args...);}