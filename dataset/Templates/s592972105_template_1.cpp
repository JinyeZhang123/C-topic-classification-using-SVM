template <typename T>
class RMQ {
private:
	vector<T> _dat;
	int _n;
	T _initial;

public:
	RMQ(int n, int initial) {
		init(n, initial);
	}