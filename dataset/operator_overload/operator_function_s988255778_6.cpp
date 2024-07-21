modint operator*=(modint a) {
    (num*=a.num)%=MOD;
    return *this;
  }