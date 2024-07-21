template<class T>
class RMQ {
public:
	T operator ()(const T a, const T b) {
		return min(a, b);
	}