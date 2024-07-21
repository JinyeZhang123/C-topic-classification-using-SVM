bool operator<(const data& d){
    if(sqr == d.sqr) return h < d.h;
    return sqr < d.sqr;
  }