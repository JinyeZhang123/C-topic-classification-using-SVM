template <typename FirstType = unsigned, typename SecondType = long long>
struct Edge {
	typedef FirstType IndexType;
	typedef SecondType FlowType;
	IndexType from;
	IndexType to;
	FlowType flow;
	FlowType capacity;
	Edge *reverseEdge;

	Edge (const IndexType &from = -1, const IndexType &to = -1, const FlowType &capacity = -1) {
		this->from = from;
		this->to = to;
		this->flow = 0;
		this->capacity = capacity;
	}