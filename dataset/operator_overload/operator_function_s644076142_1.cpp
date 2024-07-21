bool operator<(const complex<T> &a, const complex<T> &b){
    return abs(a.real() - b.real()) < P_eps ? a.imag() + P_eps < b.imag() : a.real() + P_eps < b.real();
  }