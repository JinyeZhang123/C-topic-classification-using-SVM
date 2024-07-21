template<class T>
class Segtree {
private:
	vector<T> seg;
	LL RN;
	typedef function<T(T, T)> TT;
	TT f;
	T te;
public:
	Segtree(LL N, TT _f, T e) :te(e) {
		RN = 1;
		while (RN < N)RN *= 2;
		seg.resize(2 * RN, te);
		f = _f;
	}