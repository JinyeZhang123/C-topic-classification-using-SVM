template<class T, class OP, class PROP>
class Lazy_Segment_Tree {//0-indexed ??????
public:
	vector<T> data, lazy;
	vector<bool> isupd;
	int n;
	Lazy_Segment_Tree(int a) :n(1) {
		while (n < a) n *= 2;
		data.resize(n * 2 - 1);
		lazy.resize(n * 2 - 1);
		isupd.resize(n * 2 - 1);
	}