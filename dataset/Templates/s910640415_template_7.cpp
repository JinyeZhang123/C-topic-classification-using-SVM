template<typename T> int log2max(T x) {
  int res = 0;
  ll tmp = 1;
  while(tmp < x) tmp <<= 1, res++;
  return res;
}