template<typename T>
bool same(T& uftree, int n1, int n2) {
  int p1 = find(uftree, n1);
  int p2 = find(uftree, n2);
  return (p1 == p2);
}