template<class T>
struct lazy_segment_tree{
  std::vector<T> data,lazy;
  T identity1,identity2;
  int n;
  lazy_segment_tree(){}