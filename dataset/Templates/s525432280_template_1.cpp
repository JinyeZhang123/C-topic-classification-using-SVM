template<typename T>
struct Graph {
	struct edge {
		int to, rev;
		T cap;
		edge(int to, int rev, T cap) : to(to), rev(rev), cap(cap) {}