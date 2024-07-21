template<class T>
class SegmentTree{
  public:
   int n;
   vector<T> nodes;
    //constructor
    SegmentTree(int size,T init){
      initialize(size,init);
    }