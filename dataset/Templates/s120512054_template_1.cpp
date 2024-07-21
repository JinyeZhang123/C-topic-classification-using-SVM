template <class T>
struct MaxSegTree2 {
	int n;
	T segMax[2 * MAX_N - 1], segAdd[2 * MAX_N - 1];
	void init(int n_) {
		n = 1;
		while(n < n_) n *= 2;
		for(int i = 0; i < 2 * n - 1; i++) segMax[i] = 0;
	}