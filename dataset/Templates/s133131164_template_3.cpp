template<class T>
  inline void write(T x) {
    static char stk[128];
    int top = 0;
    if(x == 0) {putc('0'); return;}