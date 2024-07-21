template<typename T>
class MaxFlow{
private:
  struct Edge{
      int to, rev;
      T cap;
      Edge(int t, int r, T c){
        to = t;
        rev = r;
        cap = c;
      }