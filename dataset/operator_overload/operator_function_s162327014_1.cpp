state operator+=(const state& other) {
    j += other.j;
    o += other.o;
    i += other.i;
    return *this;
  }