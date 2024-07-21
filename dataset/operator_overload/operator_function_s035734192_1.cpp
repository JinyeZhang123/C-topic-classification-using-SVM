Plan operator-(const Plan &other) {
    Plan ret;
    ret.t=t-other.t;
    ret.x=x-other.x;
    ret.y=y-other.y;
    return ret;
  }