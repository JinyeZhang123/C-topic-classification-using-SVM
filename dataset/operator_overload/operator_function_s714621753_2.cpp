ModInt operator-(ModInt o) {
    ModInt r(*this); r -= o; return r;
  }