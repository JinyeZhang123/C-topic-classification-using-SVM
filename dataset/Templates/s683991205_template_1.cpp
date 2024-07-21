template<class T, class BiOp >
struct SegmentTree {
	vector<T> data;
	T e;
	BiOp op;
	int size;
	SegmentTree(int n, T e, BiOp op) :e(e), op(op) {
		size = 1;
		while (size < n) size *= 2;
		data.resize(size * 2 - 1);
		for (int i = 0; i < size * 2 - 1; i++) data[i] = e;
	}