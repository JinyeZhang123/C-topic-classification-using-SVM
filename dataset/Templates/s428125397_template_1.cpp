template<typename T>
std::istream& operator>>(std::istream &is, std::vector<T> &v)
{
  for (typename std::vector<T>::size_type i = 0; i < v.size(); ++i) {
    is >> v[i];
  }