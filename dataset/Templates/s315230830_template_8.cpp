template <class T, class U>
auto sum_of(T a, U init) { return accumulate(all(a), init); }