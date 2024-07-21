template <class T>
void print_vec(const vector<T>& v) {
  for (auto t = begin(v); t != end(v);) {
    cout << *t;
    if (++t != end(v)) {
      cout << " ";
    }