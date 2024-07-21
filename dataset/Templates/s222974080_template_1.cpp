template< typename T,typename L=T >
struct LazySegmentTree {
	using F=function< T(T,T) >;
	using G=function< T(T,L) >;
	using H=function< L(L,L) >;
	using P=function< L(L,int) >;

	int sz;
	vector<T> node;
	vector<L> lazy;
	const F f;
	const G g;
	const H h;
	const P p;
	const T NODE_INIT;
	const L LAZY_INIT;

	LazySegmentTree(int n,const F f,const G g,const H h,const P p,
					const T &NODE_INIT,const L &LAZY_INIT):
		f(f),g(g),h(h),p(p),NODE_INIT(NODE_INIT),LAZY_INIT(LAZY_INIT) {
		sz=1;
		while(sz<n) sz<<=1;
		node.assign(2*sz-1,NODE_INIT);
		lazy.assign(2*sz-1,LAZY_INIT);
	}