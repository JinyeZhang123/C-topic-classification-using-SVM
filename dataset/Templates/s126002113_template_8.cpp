template <typename T>
class SegmentTree {
   public:
    int bit_, N;
    vector<T> buf_;
    T invalid;
    MinMax mode;

    SegmentTree(int size, MinMax mode = MINIMUM) : mode(mode) {
        N = 1;
        bit_ = 0;
        while (N < size) {
            N *= 2;
            ++bit_;
        }