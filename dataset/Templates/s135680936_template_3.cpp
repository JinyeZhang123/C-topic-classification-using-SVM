template<typename T> typename common_type<long long, T>::type
cross_z(Pt<T> const& v1, Pt<T> const& v2) {
  using R = typename common_type<long long, T>::type;
  return (R) v1.x * v2.y - (R) v1.y * v2.x;
}