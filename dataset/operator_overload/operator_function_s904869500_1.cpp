ModInt operator/(const ModInt& rhs){
    return (*this) * rhs.inv();
  }