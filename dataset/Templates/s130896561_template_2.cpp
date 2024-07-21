template <class T>
struct MaxSegTree3 {
	int n;
	struct S {
		bool flag;
		T dat;
		S() : dat(-INF), flag(false) {}