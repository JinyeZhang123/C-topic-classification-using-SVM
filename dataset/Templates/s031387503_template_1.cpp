template<typename T>
class union_find{
	std::map<T, T> parent;
	std::map<T, T> rank;
public:
	void add(const T& t){ parent[t] = t; rank[t] = 0; }