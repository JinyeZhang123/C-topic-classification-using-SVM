template< typename T >
class LazyMinCalc {
public:
	inline T calc(T d1, T d2) { return min(d1, d2); }