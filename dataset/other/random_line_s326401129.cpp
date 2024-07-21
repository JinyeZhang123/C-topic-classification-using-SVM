template <typename T, typename U> vector<U> make_vector(T&& n, U&& val) { return vector<U>(forward<T>(n), forward<U>(val)); }
