template <class Tp>
std::vector<Tp> make_vector(size_t n, const Tp& x) {
  return std::vector<Tp>(n, x);
}