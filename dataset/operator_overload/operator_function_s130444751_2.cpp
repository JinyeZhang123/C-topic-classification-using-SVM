Vector operator+(const Vector &a, const Vector &b)
{
  Vector ret;
  int x = 0, y = 0;
  while(x < a.size() || y < b.size()) {
    if(y == b.size() || (x != a.size() && a.vs[x] < b.vs[y])) {
      ret.vs.push_back(a.vs[x++]);
    }