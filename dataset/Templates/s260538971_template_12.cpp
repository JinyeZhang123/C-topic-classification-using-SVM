template <class Edge>
void pushFlowToSink (Net<Edge> &layeredNet, const typename Edge::IndexType &vertex, const typename Edge::FlowType &pushingFlow, vector<typename Edge::FlowType> &innerPotencial, vector<typename Edge::FlowType> &outerPotencial, const vector<bool> &isDeleted) {
	if (vertex == layeredNet.sink)
		return;

	typename Edge::FlowType excess = pushingFlow;
	
	for (typename Net<Edge>::EdgeIterator &iter = layeredNet.getOuterEdgeIterator(vertex); !iter.isEnd(); iter.move()) {
		Edge *edge = iter.get();

		if (edge->capacity == 0 || isDeleted[edge->to])
			continue;

		typename Edge::FlowType pushment = min<typename Edge::FlowType>(excess, edge->recidualCapacity());
		excess -= pushment;
		edge->flow += pushment;
		edge->reverseEdge->flow -= pushment;
		outerPotencial[edge->from] -= pushment;
		innerPotencial[edge->to] -= pushment;

		pushFlowToSink(layeredNet, edge->to, pushment, innerPotencial, outerPotencial, isDeleted);

		if (excess == 0)
			break;
	}