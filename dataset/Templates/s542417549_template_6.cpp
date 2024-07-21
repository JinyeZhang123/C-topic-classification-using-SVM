template <typename T>
void sort_b(vector<T> &val)
{
  sort(val.begin(), val.end(), greater<T>());
}