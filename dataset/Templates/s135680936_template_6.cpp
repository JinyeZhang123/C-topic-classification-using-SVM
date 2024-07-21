template<typename T>
vector<Pt<T>> convex_hull(vector<Pt<T>> a) {
  if(a.size() == 1) {
    return a;
  }