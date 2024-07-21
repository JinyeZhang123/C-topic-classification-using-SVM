template<typename T>
struct SegTree {
	//比較関数の型
	using F = function<T(T, T)>;
	//二分木を配列で表したもの
	vector<T>seg;
	//木の半分の大きさ
	int siz;
	//単位元
	const T unit;
	//比較する関数
	const F f;

	//大きさn、unit(単位元)、f(モノイド)でsegtreeを初期化する
	SegTree(int n, const T unit, const F f) : unit(unit), f(f) {
		siz = 1;
		while (siz < n)siz <<= 1;
		seg.assign(siz * 2 - 1, unit);
		siz--;
	}