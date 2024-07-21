template <typename T>
void dump_vector(const std::vector<T>& src)
{
  for (int i = 0; i < src.size()-1; ++i)
  {
    std::cout << src[i] << ' ';
  }