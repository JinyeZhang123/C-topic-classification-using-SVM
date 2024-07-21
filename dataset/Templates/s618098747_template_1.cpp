template <typename T>
struct BIT {
	int n;
	vector<T> value;
	BIT(int n): n(n), value(n + 1){}