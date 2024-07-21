template<class T>
class SegTree {
public:
	int size;
	vector<T> seg; //配列
	T e; //単位元
	function <T(T, T)> f; //演算
	SegTree(T n,T _e,function<T(T,T)> _f){ //コンストラクタ(初期化)
		f = _f;
		e = _e;
		size = 1;
		while (size < n)size *= 2;
		seg.resize(size * 2 - 1, e);
	}