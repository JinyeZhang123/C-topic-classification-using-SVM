mint operator++(int) {
    mint ret = x;
    if ((++x) >= MOD) {
      x -= MOD;
    }