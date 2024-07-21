template<typename T>
class RURGSegmentTree {
 private:
  tuple<T, bool> MergeUpdates(tuple<T, bool> u1, tuple<T, bool> u2) {
    if (get<1>(u2)) return u2;
    return u1;
  }