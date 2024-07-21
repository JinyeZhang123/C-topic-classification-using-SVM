LB operator|(const LB &x, const LB &y) {
    LB z;
    for(int i = 0; i < L; i++) if(x[i]) z(x[i]);
    for(int i = 0; i < L; i++) if(y[i]) z(y[i]);
    return z;
  }