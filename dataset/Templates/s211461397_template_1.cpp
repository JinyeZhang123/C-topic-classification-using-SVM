template<class T>
class RUQ_RMQ {
public:
	int n;
	T dat[MAX], lazy[MAX], DEFAULT;
	bool(*cmp)(T, T);
	void init(int n_,
		bool(*c)(T, T) = [](int a, int b) {return a < b; }