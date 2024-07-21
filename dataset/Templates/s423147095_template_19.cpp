template<class T>
struct SegTreeT2
{
	int size;
	vector<T> tree;
	vector<pair<bool, T>> lazy;

	T initialValue;
	static constexpr unsigned int msb(unsigned int v) { REP(i, 5) v |= v >> (1 << i); return (v >> 1) + 1; }