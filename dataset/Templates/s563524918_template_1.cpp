template<class T>
class RUQ_RSQ {
public:
	int n;
	T dat[MAX], lazy[MAX], ZERO, DEFAULT;
	void init(int n_, T d = INT_MAX, T t = 0) {
		DEFAULT = d;
		ZERO = T();
		n = 1; while (n < n_)n <<= 1;
		for (int i = 0; i < 2 * n - 1; i++) {
			dat[i] = t; lazy[i] = DEFAULT;
		}