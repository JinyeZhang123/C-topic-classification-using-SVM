template <typename FirstType = unsigned, typename SecondType = long long>
struct Edge {
	typedef FirstType IndexType;
	typedef SecondType CapacityType;
	IndexType from;
	IndexType to;
	CapacityType flow;
	CapacityType capacity;
	Edge *reverseEdge;

	Edge (const IndexType &from = -1, const IndexType &to = -1, const CapacityType &capacity = -1) {
		this->from = from;
		this->to = to;
		this->flow = 0;
		this->capacity = capacity;
	}