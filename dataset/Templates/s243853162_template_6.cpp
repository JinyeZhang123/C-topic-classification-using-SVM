template< typename T >
struct edge {
  int to,cap,rev;

  operator int() const { return to; }