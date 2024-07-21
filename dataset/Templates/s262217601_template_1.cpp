template< typename T >
struct BIT {
  vector< T > data;

  BIT(int sz) {
    data.assign(++sz, 0);
  }