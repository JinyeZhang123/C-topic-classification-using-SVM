template <typename T>
struct SegmentTree{
 int n;
 vector<T>dat;
 SegmentTree(int n_){ 
   n=n_;
   dat.resize(n*2-1,0);
  }