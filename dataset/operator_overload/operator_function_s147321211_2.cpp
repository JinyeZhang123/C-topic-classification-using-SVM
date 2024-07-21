mint operator--(int) {
    mint ret = x;
    if ((--x) < 0) {
      x += MOD;
    }