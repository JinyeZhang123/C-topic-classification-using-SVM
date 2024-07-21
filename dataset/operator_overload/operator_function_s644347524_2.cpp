bool operator<=(const card& c){
    return (*this < c) || (num == c.num);
  }