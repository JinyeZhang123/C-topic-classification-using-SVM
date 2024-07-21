template<class T> 
T qmod(T a, T b){ T ret = 1; while (b){ if (b & 1) ret *= a; b >>= 1; a *= a; }