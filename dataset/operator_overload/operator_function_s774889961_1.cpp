Vector operator-(Point a,Point b) {
  Vector vec;
  vec.x=a.x-b.x; vec.y=a.y-b.y;
  return vec;
}