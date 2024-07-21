bool operator<(const edge& r) {
    if (c != r.c) return c < r.c;
    if (x != r.x) return x < r.x;
    return y < r.y;
  }