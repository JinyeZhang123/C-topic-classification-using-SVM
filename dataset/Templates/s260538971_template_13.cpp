template <class Edge>
void pushFlowFromSource (Net<Edge> &layeredNet, const typename Edge::IndexType &vertex, const typename Edge::FlowType &pushingFlow, vector<typename Edge::FlowType> &innerPotencial, vector<typename Edge::FlowType> &outerPotencial, const vector<bool> &isDeleted) {
	if (vertex == layeredNet.source)
		return;

	typename Edge::FlowType lack = pushingFlow;
	
	for (typename Net<Edge>::EdgeIterator &iter = layeredNet.getInnerEdgeIterator(vertex); !iter.isEnd(); iter.move()) {
		Edge *edge = iter.get();

		if (edge->capacity == 0 || isDeleted[edge->from])
			continue;

		typename Edge::FlowType pushment = min<typename Edge::FlowType>(lack, edge->recidualCapacity());
		lack -= pushment;
		edge->flow += pushment;
		edge->reverseEdge->flow -= pushment;
		outerPotencial[edge->from] -= pushment;
		innerPotencial[edge->to] -= pushment;

		pushFlowFromSource(layeredNet, edge->from, pushment, innerPotencial, outerPotencial, isDeleted);

		if (lack == 0)
			break;
	}