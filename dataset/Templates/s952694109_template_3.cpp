template<typename T> struct FordFulkerson{
	struct edge{
		int to,rev;
		T cap;
	}