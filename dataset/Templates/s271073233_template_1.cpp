template <typename T>
inline int modpow(lint base, int exp, int modulo) {
  base %= modulo;
  lint result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulo;
    base = (base * base) % modulo;
    exp >>= 1;
  }