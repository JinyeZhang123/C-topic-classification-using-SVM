template <class Monoid> struct SegTree {
	int N;
	vector<Monoid> node;
	std::function<Monoid(Monoid, Monoid)> operation;
	Monoid unit;//単位元

	std::function<bool(Monoid, Monoid)> comp;
	Monoid not_find_sgn;

	SegTree(vector<Monoid>& data, std::function<Monoid(Monoid, Monoid)> op, Monoid U) {
		//データ　演算　単位元
		operation = op;
		unit = U;
		int size = data.size();
		N = 1;
		while (N < size)N <<= 1;
		node.resize(2 * N - 1, unit);

		for (int i = 0; i < size; i++) {
			node[i + N - 1] = data[i];
		}