template<typename T, typename U>
struct lazysegtree {
	//木を配列であらわしたもの
	vector<T> seg;
	//遅延ノード
	vector<U> lazy;
	//木の1/2の大きさ
	int siz, height;
	//本体の単位元
	const T sunit;
	//遅延ノードの単位元
	const U lunit;
	//本体のマージ関数の型
	using F = function<T(T, T)>;
	//遅延ノードのマージ関数の型
	using F2 = function<U(U, U)>;
	//遅延ノードと本体のマージ関数の型
	using F3 = function<T(T, U)>;
	//本体同士をマージする関数
	const F f;
	//遅延ノード同士をマージする関数
	const F2 f2;
	//遅延ノードと本体をマージする関数
	const F3 f3;

	//n の大きさ, a (単位元), 本体のマージ関数, 遅延ノードの単位元, 遅延ノードのマージ関数, 遅延ノードと本体のマージ関数 で segtree を初期化する
	lazysegtree(int n, const T sunit, const F f, const U lunit, const F2 f2, const F3 f3) : sunit(sunit), f(f), lunit(lunit), f2(f2), f3(f3) {
		siz = 1;
		height = 0;
		while (siz < n)siz <<= 1, ++height;
		seg.assign(2 * siz - 1, sunit);
		lazy.assign(2 * siz - 1, lunit);
		--siz;
	}