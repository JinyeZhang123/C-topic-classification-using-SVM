template<class T>
class RMQ {
public:
	T operator ()(const T a, const T b, const int ra = 1, int rb = 1) {
		return min(a, b);
	}