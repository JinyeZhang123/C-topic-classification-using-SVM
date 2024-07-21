template<class T1,class T2,class BiOp1,class BiOp2,class BiOp3>
struct LazySegmentTree {
	//BiOp1:T1×T1->T1
	//BiOp2:T2×T2->T2
	//BiOp3:T1×T2->T1
	vector<T1> data;
	vector<T2> lazy;
	T1 e1;
	T2 e2;
	BiOp1 op1;
	BiOp2 op2;
	BiOp3 op3;
	int size;
	LazySegmentTree(int n, T1 e1, T2 e2, BiOp1 op1, BiOp2 op2, BiOp3 op3) :e1(e1), e2(e2), op1(op1), op2(op2), op3(op3) {
		size = 1;
		while (size < n) size *= 2;
		data.resize(size * 2 - 1);
		lazy.resize(size * 2 - 1);
		for (int i = 0; i < size * 2 - 1; i++) {
			data[i] = e1;
			lazy[i] = e2;
		}