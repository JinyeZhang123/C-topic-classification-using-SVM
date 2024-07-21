template <class T>
struct fill {
  typedef std::pair<bool, T> value_t;
  value_t identity() const { return std::make_pair(false, T()); }