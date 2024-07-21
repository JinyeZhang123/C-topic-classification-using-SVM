template<class T>
class RAQ_RMQ {
public:
	int n;
	T dat[MAX], lazy[MAX], ZERO, DEFAULT;
	bool(*cmp)(T, T);
	void init(int n_,
		bool(*c)(T, T) = [](int a, int b) {return a < b; }