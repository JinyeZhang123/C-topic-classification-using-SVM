template <class Monoid, class Function>
class SegmentTree {
 public:
  SegmentTree(const std::vector<Monoid>& data, Monoid identity_element,
              Function function)
      : identity_element_(identity_element), data_(data), function_(function) {
    build();
  }