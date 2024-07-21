template<i64 N> struct prime_numbers{
  set<i64> primes;
  bool p[N+1];
  
  constexpr prime_numbers<N>() : primes(), p() {
    p[0] = p[1] = true;
    for(i64 i=2; i<=N; i++) {
      if(p[i]) continue;
      if(i*i<=N) {
        for(i64 j=i; i*j<=N; j++) {
          p[i*j] = true;
        }