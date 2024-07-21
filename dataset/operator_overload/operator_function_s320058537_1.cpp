bool operator<(const Node &a, const Node &b){
  if(a.cost != b.cost){
    return a.cost < b.cost;
  }