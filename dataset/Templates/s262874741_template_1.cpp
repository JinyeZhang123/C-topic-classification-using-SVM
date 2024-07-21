template <typename T>
std::vector<T> VECTOR_(T *array, std::size_t size) {
  return std::vector<T>(array, array + size);
}