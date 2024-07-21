template <class Monoid1, class Monoid2> struct LazySegTree {
	int N;
	vector<Monoid1> node;
	vector<Monoid2> lazy;
	std::function<Monoid1(Monoid1, Monoid1)> operation1;
	std::function<Monoid2(Monoid2, Monoid2)> operation2;
	std::function<Monoid1(Monoid1, Monoid2)> operation3;
	std::function<Monoid2(Monoid2, int)> operation4;
	Monoid1 unit1;//Monoid1の単位元
	Monoid2 unit2;//Monoid2の単位元

	LazySegTree(vector<Monoid1>& data,
		std::function<Monoid1(Monoid1, Monoid1)> op1,
		std::function<Monoid2(Monoid2, Monoid2)> op2,
		std::function<Monoid1(Monoid1, Monoid2)> op3,
		std::function<Monoid2(Monoid2, int)> op4,
		Monoid1 U1, Monoid2 U2) {
		//データ　演算1~4　単位元1~2
		operation1 = op1;
		operation2 = op2;
		operation3 = op3;
		operation4 = op4;
		unit1 = U1;
		unit2 = U2;
		int size = data.size();
		N = 1;
		while (N < size)N <<= 1;
		node.resize(2 * N - 1, unit1);
		lazy.resize(2 * N - 1, unit2);

		for (int i = 0; i < size; i++) {
			node[i + N - 1] = data[i];
		}