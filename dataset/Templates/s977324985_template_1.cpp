template<typename T, typename U>
struct lazysegtree {
	//木を配列であらわしたもの
	vector<T> seg;
	//遅延ノード
	vector<U> lazy;
	//サイズノード
	vector<int> size;
	//木の1/2の大きさ
	int siz, height;
	//本体の単位元
	const T se;
	//遅延ノードの単位元
	const U le;
	//本体のマージ関数の型
	using F = function<T(T, T)>;
	//遅延ノードのマージ関数の型
	using F2 = function<U(U, U)>;
	//遅延ノードと本体のマージ関数の型
	using F3 = function<T(T, U)>;
	//サイズを使った演算をする関数の型
	using F4 = function<U(U, int)>;
	//本体同士をマージする関数
	const F f;
	//遅延ノード同士をマージする関数
	const F2 f2;
	//遅延ノードと本体をマージする関数
	const F3 f3;
	//サイズを使った演算をする関数
	const F4 f4;

	//n の大きさ, a (単位元), 本体のマージ関数, 遅延ノードの単位元, 遅延ノードのマージ関数, 遅延ノードと本体のマージ関数, サイズを使った演算をする関数 で segtree を初期化する
	lazysegtree(int n, const T se, const F f, const U le, const F2 f2, const F3 f3, const F4 f4) : se(se), f(f), le(le), f2(f2), f3(f3), f4(f4) {
		siz = 1;
		height = 0;
		while (siz < n)siz <<= 1, ++height;
		seg.assign(2 * siz - 1, se);
		lazy.assign(2 * siz - 1, le);
		size.assign(2 * siz - 1, 1);
		--siz;
	}