template <class T>
struct min {
  typedef T value_t;
  T identity() const { return std::numeric_limits<T>::max();}