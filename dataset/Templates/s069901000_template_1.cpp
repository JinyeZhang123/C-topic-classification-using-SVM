template<class M, class L> struct LazyPropagationSegmentTree
{
	int n;
	int size;
	int log_n;
	vector<M> data;
	vector<L> lazy;
	const function<M(M, M)> f_m;
	const M e_m;
	const function<L(L, L)> f_l;
	const L e_l;
	const function<M(M, L)> f;
	const function<L(L, int)> p;

	LazyPropagationSegmentTree(int n, function<M(M, M)> f_m, M e_m, function<L(L, L)> f_l, L e_l, function<M(M, L)> f, function<L(L, int)> p) : n(n), f_m(f_m), e_m(e_m), f_l(f_l), e_l(e_l), f(f), p(p) {
		size = 1;
		log_n = 0;
		while (size < n) size <<= 1, log_n++;
		data.assign(size * 2, e_m);
		lazy.assign(size * 2, e_l);
	}