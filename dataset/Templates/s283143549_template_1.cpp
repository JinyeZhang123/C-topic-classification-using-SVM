template<typename T> class SegmentTree {
 public:
  SegmentTree(Size SIZE, T INF = 2e9) : SIZE(SIZE), INF(INF), ROOT(std::make_unique<Node>(0, INF)) {
    ROOT->update = 0;
  }