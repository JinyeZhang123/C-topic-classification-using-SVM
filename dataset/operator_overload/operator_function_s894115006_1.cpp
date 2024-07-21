bool operator<( line &rhs) {
    if(eval(x) == rhs.eval(x))
      return a < rhs.a;
    return eval(x) < rhs.eval(x);
  }