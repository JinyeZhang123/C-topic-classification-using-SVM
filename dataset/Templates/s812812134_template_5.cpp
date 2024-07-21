template<typename Monoid, typename T = ll> struct SegTree {
	using Func = function<Monoid( Monoid, Monoid )>;
	const Func func;
	const Monoid UNITY;
	T SIZE_R;
	vector<Monoid> data;

	SegTree( T n, const Func f, const Monoid &unity ) :
		func( f ), UNITY( unity ) {
			init( n );
		}