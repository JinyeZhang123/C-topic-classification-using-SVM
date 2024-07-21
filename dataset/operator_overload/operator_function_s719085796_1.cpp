bool operator<(const Edge& e1, const Edge& e2) {
  return e1.cost > e2.cost;
}