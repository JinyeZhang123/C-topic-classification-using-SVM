template <typename T, typename F>
auto make_segment_tree(vector<T> V, T ID, F func) {
    return SegmentTree<T, F>(V, ID, func);
}