template<class T>
class Tree {
  public:
    int N;
    vvec<edge<T>> G;
    Tree(int _N): N(_N),G(_N){
    }