template< typename Monoid, typename OperatorMonoid = Monoid >
struct LazySegmentTree {
	using F = function<Monoid(Monoid,Monoid)>;
	using G = function<Monoid(Monoid,OperatorMonoid)>;
	using H = function<OperatorMonoid(OperatorMonoid,OperatorMonoid)>;

	int sz,height;
	vec<Monoid> data;
	vec<OperatorMonoid> lazy;
	const F op;
	const G homo;
	const H comp;
  	const Monoid e;
	const OperatorMonoid Oe;

	LazySegmentTree(int n,const F op,const G homo,const H comp,
					const Monoid &e,const OperatorMonoid Oe)
		: op(op),homo(homo),comp(comp),e(e),Oe(Oe) {
		sz = 1;
		height = 0;
		while(sz<n) sz <<= 1,height++;
		data.assign(2*sz,e);
		lazy.assign(2*sz,Oe);
	}