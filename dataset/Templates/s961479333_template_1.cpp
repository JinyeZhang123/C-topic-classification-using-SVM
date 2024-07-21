template <class T>
struct Lazy_BIT {
#define SZ(a) (a&-a)
#define LEFT(a) (a-SZ(a))
#define UP(a) (a+SZ(a))

	vector<T> x,lazy;
	Lazy_BIT(int n) : x(n + 1, 0), lazy(n + 1, 0) {}