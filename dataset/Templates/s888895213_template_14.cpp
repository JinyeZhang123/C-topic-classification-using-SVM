template <typename T>
T modinv(T a, T m){
  long long x = 0, y = 0;
  extgcd<long long>(a, m, x, y);
  x %= m;
  if(x < 0)x += m;
  return x;
}