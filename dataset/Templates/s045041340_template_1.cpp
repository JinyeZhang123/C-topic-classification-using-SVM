template<class T>
int SearchVectorForN(T x, vector<T> &v) {
  return distance(lower_bound(v.begin(), v.end(), x), upper_bound(v.begin(), v.end(), x));
}