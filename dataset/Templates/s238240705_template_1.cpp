template <typename Monoid>
class SegmentTree{
public:
    //コンストラクタ n:サイズ pr:初期値
    SegmentTree(ll n,Monoid pr){
        size = pow(2,ceil(log2(n)));
        vec.resize(2*size-1,pr);
    }