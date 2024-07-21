template<typename T> struct Dinic{
	struct edge{
		int to,rev;
		T cap;
	}