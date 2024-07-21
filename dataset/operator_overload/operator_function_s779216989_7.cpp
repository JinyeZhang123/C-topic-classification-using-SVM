bool operator==(const Point &p){
    return (epscut(x-p.x)==0) && (epscut(y-p.y)==0);
  }