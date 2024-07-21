inline void inc(int &x, const int y) {  x = x + y >= mod ? x + y - mod : x + y;  }
