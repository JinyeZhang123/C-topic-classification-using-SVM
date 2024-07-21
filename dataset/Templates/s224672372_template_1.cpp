template <typename T>
class SegmentTree {
 private:
  function<T(T, T)> merge_fn;
  T empty_value;
  vector<T> nodes;
  int num_nodes;

  // Returns the fold of overwrap between [node_l, node_r) and [l, r).
  // nodes[node_index] needs to correspond to [node_l, node_r).
  T GetRangeInternal(int node_index, int node_l, int node_r, int l, int r) {
    if (node_r <= l || r <= node_l) return empty_value;
    if (l <= node_l && node_r <= r) return nodes[node_index];
    int node_m = (node_l + node_r) / 2;
    return merge_fn(
        GetRangeInternal(2 * node_index, node_l, node_m, l, r),
        GetRangeInternal(2 * node_index + 1, node_m, node_r, l, r));
  }