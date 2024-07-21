template<typename T>
auto spin(Pt<T> const& a, Pt<T> const& b, Pt<T> const& c) {
  // spin of a -> b -> c
  // return > 0 : counterclockwise
  // return = 0 : collinear
  // return < 0 : clockwise
  return cross_z(b - a, c - a);
}