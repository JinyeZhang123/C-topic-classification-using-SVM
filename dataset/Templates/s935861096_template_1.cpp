template<class T>
class RAQ_RSQ {
public:
	int n;
	T dat[MAX], lazy[MAX], ZERO;
	void init(int n_) {
		ZERO = T();
		n = 1; while (n < n_)n <<= 1;
		for (int i = 0; i < 2 * n - 1; i++) {
			dat[i] = lazy[i] = ZERO;
		}