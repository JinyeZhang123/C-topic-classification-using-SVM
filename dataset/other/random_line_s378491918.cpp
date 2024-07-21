template<class T, class...U> typename enable_if<!is_same<T, line>::value, T>::type next(istream& in, const U&... args) {
