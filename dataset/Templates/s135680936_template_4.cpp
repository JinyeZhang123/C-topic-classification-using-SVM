template<typename T> typename common_type<long long, T>::type
dot(Pt<T> const& v1, Pt<T> const& v2) {
  using R = typename common_type<long long, T>::type;
  return (R) v1.x * v2.x + (R) v1.y + v2.y;
}