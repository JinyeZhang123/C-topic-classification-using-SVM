template <class Monoid1,class Monoid2> struct LazySegmentTree {
    int N;
    vector<Monoid1> tree;
    vector<Monoid2> lazy;

    //depending on the problem
    Monoid1 unit_x;
    Monoid2 unit_m;
    using FX = function<Monoid1(Monoid1,Monoid1)>; FX fx;
    using FA = function<Monoid1(Monoid1,Monoid2)>; FA fa;
    using FM = function<Monoid2(Monoid2,Monoid2)>; FM fm;
    //

    LazySegmentTree(int _N,Monoid1 _unitx,Monoid2 _unitm,FX _fx,FA _fa,FM _fm):
        N(_N),unit_x(_unitx),unit_m(_unitm),fx(_fx),fa(_fa),fm(_fm) {
        tree.assign(N + N,unit_x);
        lazy.assign(N + N,unit_m);
    }