template<typename T = ll, bool QUERY_IS_GETMAX = true>
struct StarrySkyTree {
	std::vector<T> seg, lazy;
	int size;
	T inf;
	std::function<T(T&, T&)> func;
	StarrySkyTree() {}