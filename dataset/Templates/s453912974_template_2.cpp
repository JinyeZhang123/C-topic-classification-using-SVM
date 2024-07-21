template<class T>
class delaySegmentTree{
  public:
   int n;
   vector<T> nodes;
   vector<T> delaynodes;
    //constructor
    delaySegmentTree(int size,T init){
      initialize(size,init);
    }