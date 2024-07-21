template<class T>
T gcd(T a, T b){ return !b ? a : gcd(b, a % b); }