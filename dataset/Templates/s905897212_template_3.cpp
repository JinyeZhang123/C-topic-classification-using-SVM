template<class T>
class ADD {
public:
	T operator ()(const T a, const T b, const int ra = 1, int rb = 1) {
		return a + b;
	}