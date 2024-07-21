template<class T> struct flow {
  struct edge {
    int to;
    T cap;
    int rev;
  }