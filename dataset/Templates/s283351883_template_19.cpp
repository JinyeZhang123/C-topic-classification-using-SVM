template<class T, class TUpdater>
struct RangeSegTreeT
{
	int size;
	vector<T> tree;
	vector<pair<bool, T>> lazy;
	TUpdater updator;
	T initialValue;

	static constexpr unsigned int msb(unsigned int v) { REP(i, 5) v |= v >> (1 << i); return (v >> 1) + 1; }