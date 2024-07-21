template< typename T >
struct FordFulkerson {

	struct FlowEdge {
		int to;
		T cap;
		int rev;
		FlowEdge() {}