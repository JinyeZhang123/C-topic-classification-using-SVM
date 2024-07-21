template<typename T>
class MaxHeap{
  public:
    vector<T> a;
    const T INF;
    MaxHeap(int n):INF(numeric_limits<T>::max()/2){a.resize(n+1, INF);}