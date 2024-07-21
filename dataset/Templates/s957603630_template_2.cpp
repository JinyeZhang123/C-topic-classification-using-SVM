template <typename T, typename F>
auto make_segment_tree(int N, T ID, F func) {
    return SegmentTree<T, F>(N, ID, func);
}