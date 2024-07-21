template< typename SType>
class SegmentTree
{
    public:
        // 集合の要素 2 つを引数に取リ、その二項演算結果を返す関数
        using Func = function< SType(SType, SType) >;

    public:
        SegmentTree() {}