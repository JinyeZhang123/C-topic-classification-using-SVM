template <class T>
struct SegmentTree/*{{{*/
{
    vector<T> nodes;
    SegmentTree(int size) {
        nodes.resize(size*2, 0);
    }