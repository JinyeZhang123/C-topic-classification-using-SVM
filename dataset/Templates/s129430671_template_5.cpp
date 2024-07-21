template<typename T>
class SegmentTree
{
private:
    using F = function<T(T,T)>;
    ::std::vector<T> btree;
    F f, _update;
    T e;
    int n;
public:
    SegmentTree(){}