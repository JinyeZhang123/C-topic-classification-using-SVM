template <typename T = int>
T minimum_power_2(T n){
  T i = 1;
  while(i<n) i = i<<1;
  return i;
}