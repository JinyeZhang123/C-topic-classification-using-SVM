template <class T>
struct MinSegTree3 {
	int n;
	struct S {
		bool flag;
		T dat;
		S() : dat(INF), flag(false) {}