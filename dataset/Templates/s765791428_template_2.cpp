template<typename T>
struct RangeAddRangeSum{
	int n;
	BIT<T> bit, bit2;
	RangeAddRangeSum(int n):n(n), bit(n), bit2(n){}