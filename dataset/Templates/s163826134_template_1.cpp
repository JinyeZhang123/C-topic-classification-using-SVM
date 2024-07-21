template<typename T>
class Integer {
public:
	T gcd(T a,T b) {
		if (a < b) swap(a,b);
 		return b != 0 ? gcd(b, a % b) : a;
	}