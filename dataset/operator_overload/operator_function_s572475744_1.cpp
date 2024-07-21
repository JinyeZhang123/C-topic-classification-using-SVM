Modint operator++(int) {
    Modint ans = *this;
    if (num == mod - 1)
      num = 0;
    else
      num++;
    return ans;
  }