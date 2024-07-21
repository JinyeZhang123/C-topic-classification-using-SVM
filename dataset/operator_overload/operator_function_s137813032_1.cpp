bool operator<(seg &rv){
    if(l != rv.l) return l < rv.l;
    else return r < rv.r;
  }