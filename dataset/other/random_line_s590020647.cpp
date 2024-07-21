template <class T, size_t D> struct _vec { using type = vector<typename _vec<T, D - 1>::type>; };
