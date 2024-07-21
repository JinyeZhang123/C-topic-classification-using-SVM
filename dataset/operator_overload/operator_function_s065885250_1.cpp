bool operator<(const Point& r){
    if(pr == r.pr){
      if(pr == 0) return x < r.x;
      if(pr == 1) return y < r.y;
      if(pr == 2) return x > r.x;
      if(pr == 3) return y > r.y;
      return false;
    }