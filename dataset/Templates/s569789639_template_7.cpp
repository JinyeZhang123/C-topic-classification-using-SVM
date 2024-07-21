template <typename T>
T set_bits(T a)
{ return __builtin_popcount(a); }