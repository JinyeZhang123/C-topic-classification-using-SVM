template<class SegNode> struct SegTree {
    std::vector<SegNode> Tree;
    std::vector<int> lc, rc;
    int sz, L, R, rt;
    std::function<SegNode(SegNode, SegNode)> Merge;
    int construct_node() {
        sz++;
        Tree.push_back(SegNode());
        lc.push_back(-1); rc.push_back(-1);
        return sz-1;
    }