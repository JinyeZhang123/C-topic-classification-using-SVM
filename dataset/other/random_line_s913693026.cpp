template<typename T> T mod_inv(T x, const T &p) { return mod_pow(x, p-2, p); }
