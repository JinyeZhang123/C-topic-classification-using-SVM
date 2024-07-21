template<class T, class... Ts> 
auto make_vec(size_t a, Ts... ts){return vector<decltype(make_vec<T>(ts...))>(a, make_vec<T>(ts...));}