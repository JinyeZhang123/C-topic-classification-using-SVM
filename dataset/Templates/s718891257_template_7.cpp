template <typename X, typename M>
struct SegTreeLazyProportional {
	using FX = function<X(X, X)>;
	using FA = function<X(X, M)>;
	using FM = function<M(M, M)>;
	using FP = function<M(M, ll)>;
	int n;
	FX fx;
	FA fa;
	FM fm;
	FP fp;
	const X ex;
	const M em;
	vector<X> dat;
	vector<M> lazy;
	SegTreeLazyProportional(int n_, FX fx_, FA fa_, FM fm_, FP fp_, X ex_, M em_)
		: n(), fx(fx_), fa(fa_), fm(fm_), fp(fp_), ex(ex_), em(em_), dat(n_ * 4, ex), lazy(n_ * 4, em) {
		int x = 1;
		while (n_ > x) x *= 2;
		n = x;
	}