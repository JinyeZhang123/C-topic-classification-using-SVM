template<class T>
class SUM {
public:
	T operator ()(const T a, const T b, const int ra = 1, int rb = 1) {
		return a*ra + b*rb;
	}