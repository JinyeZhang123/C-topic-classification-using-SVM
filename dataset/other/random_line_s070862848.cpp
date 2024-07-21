template<class T, class... Ts>auto vec(size_t a, Ts... ts){return vector<decltype(vec<T>(ts...))>(a, vec<T>(ts...));}
