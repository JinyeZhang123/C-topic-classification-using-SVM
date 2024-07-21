template <typename T>
T out(vector < T > v)
{
  for(size_t i = 0; i < v.size(); i++)
  {
    debug(v[i]);
  }