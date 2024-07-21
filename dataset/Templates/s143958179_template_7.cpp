template<typename T>
class Diameter :  public Tree<T>{
  public:
    using Tree<T>::N;
    using Tree<T>::G;
    vector<T> d;
    vector<T> ans;
    T diameter;
    Diameter(int _N):Tree<T>::Tree(_N), d(_N,0), ans(_N){}