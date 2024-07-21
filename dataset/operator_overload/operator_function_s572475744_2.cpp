Modint operator--(int) {
    Modint ans = *this;
    if (num == 0)
      num = mod - 1;
    else
      num--;
    return ans;
  }