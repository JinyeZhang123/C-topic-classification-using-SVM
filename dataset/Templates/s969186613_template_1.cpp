template<typename T>
void Dump(const std::vector<T>& xs)
{
  for (int i = 0; i < xs.size()-1; ++i)
  {
    std::cout << xs[i] << ' ';
  }