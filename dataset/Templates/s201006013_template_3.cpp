template<class T, class U>
T POW(T x, U n) {T ret=1; while (n>0) {if (n&1) {ret*=x;}