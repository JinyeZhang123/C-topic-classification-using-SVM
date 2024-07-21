void operator++() {
      int x = val & -val, y = val + x;
      val = ((val & ~y) / x / 2) | y;
      if (val >= (1 << n)) n = 0;
    }