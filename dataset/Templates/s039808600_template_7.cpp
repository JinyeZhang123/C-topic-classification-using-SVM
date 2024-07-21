template <class T>
T sum_of(const vector<T> &a) { return accumulate(all(a), (T)0); }