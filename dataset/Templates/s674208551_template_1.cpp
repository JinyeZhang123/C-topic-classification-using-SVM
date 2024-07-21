template <class T>
struct add_count {
  typedef std::pair<T,T> value_t;
  value_t identity() const { return std::make_pair(T(),T()); }