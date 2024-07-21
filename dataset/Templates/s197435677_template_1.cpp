template<typename T>
class LazyPropagationSegmentTree {
public:
  LazyPropagationSegmentTree(int n) : size_(1) {
    while(size_ < n) size_ <<= 1;
    node_.assign(size_ << 1, 0);
    lazy_.assign(size_ << 1, 0);
  }