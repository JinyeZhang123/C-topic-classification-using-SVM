template<typename T> constexpr bool chmax(T& a, const T& b)
{ if(a < b) { a = b; return true; }