template<typename T = int, T  LOWEST = INT_MAX, typename F = std::function<T(T, T)>>
class SegmentTree {
public:
  explicit SegmentTree(int n, const F& op = (const int&(*)(const int&, const int&))std::min) : NIL(-1), op_(op) {initialize(n);}