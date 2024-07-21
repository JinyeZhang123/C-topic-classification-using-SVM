template<class T>
T inv(T t, T p){ return t == 1 ? 1 : (p - p / t) * inv(p % t, p) % p; }