template <class T>
void print(const vector<T> &v, int suc = 1)
{
  rep(i, v.size())
      print(v[i], i == int(v.size()) - 1 ? suc : 2);
}