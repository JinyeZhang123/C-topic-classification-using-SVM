template<class T, class Func = function<T(T, T)>>
class segtree {
	vector<T> obj;
	int offset;
	Func updater;
	T e;
	int bufsize(int num) {
		int i = 1;
		for (; num >i; i <<= 1);
		offset = i - 1;
		return (i << 1) - 1;
	}