  inline void Add(int &a, int b) { a = a < mod - b ? a + b : a - mod + b; }
