template<class T>
class Graph {
  public:
    int N;
    vvec<edge<T>> G;
    Graph(int _N): N(_N),G(_N){
    }