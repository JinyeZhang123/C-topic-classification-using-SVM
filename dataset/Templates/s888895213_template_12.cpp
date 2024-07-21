template <typename T>
map<T, int> factorize(T n){
  map<T, int> res;
  T tmp = n;
  for(T i = 2; i * i <= n; i++){
    while(tmp % i == 0){
      ++res[i];
      tmp /= i;
    }