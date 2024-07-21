T operator[](int k){
    return sum(k) - sum(k-1);
  }