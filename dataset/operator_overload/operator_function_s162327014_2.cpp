state operator+(const state& other) {
    state s;
    s.j = j + other.j;
    s.o = o + other.o;
    s.i = i + other.i;
    return s;
  }