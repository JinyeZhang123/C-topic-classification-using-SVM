template <typename X, typename M>
class SegmentTree {
  using Fx = function<X(X, X)>;
  using Fa = function<X(X, M)>;
  using Fm = function<M(M, M)>;
  Fx fx_;
  Fa fa_;
  Fm fm_;
  const X ex_;
  const M em_;
  vector<X> node_;
  vector<M> lazy_;
  int n_;             // 最下段のノード数

 public:
  SegmentTree(const vector<X>& v, Fx fx, Fa fa, Fm fm, X ex, M em)
   : fx_(fx), fa_(fa), fm_(fm), ex_(ex), em_(em) {
    n_ = 1;
    while (n_ < v.size()) n_ <<= 1;  // n: 最下段の横幅
    node_.resize(2 * n_ - 1, ex_);   // ex で初期化
    lazy_.resize(2 * n_ - 1, em_);   // em で初期化

    // 最下段に値を挿入
    rep(i, v.size()) set(i, v[i]);
    // 最下段以外を更新していく
    build();
  }