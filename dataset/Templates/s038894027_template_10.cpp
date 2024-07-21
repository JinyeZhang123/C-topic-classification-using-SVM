template <class Edge>
void pushFlow (Net<Edge> &layeredNet, const typename Edge::IndexType &vertex, const typename Edge::FlowType &pushingFlow, vector<typename Edge::FlowType> &innerPotencial, vector<typename Edge::FlowType> &outerPotencial, const vector<bool> &isDeleted) {
	typename Edge::IndexType destination = (pushingFlow > 0 ? layeredNet.sink : layeredNet.source);

	if (vertex == destination)
		return;

	typename Edge::FlowType excessOrLack = abs(pushingFlow);
	
	for (typename Net<Edge>::EdgeIterator &iter = (pushingFlow > 0 ? layeredNet.getOuterEdgeIterator(vertex) : layeredNet.getInnerEdgeIterator(vertex)); !iter.isEnd(); iter.move()) {
		Edge *edge = iter.get();
		typename Edge::IndexType nextVertex = (pushingFlow > 0 ? edge->to : edge->from);

		if (edge->capacity == 0 || isDeleted[nextVertex])
			continue;

		typename Edge::FlowType pushment = min<typename Edge::FlowType>(excessOrLack, edge->recidualCapacity());
		excessOrLack -= pushment;
		edge->flow += pushment;
		edge->reverseEdge->flow -= pushment;
		outerPotencial[edge->from] -= pushment;
		innerPotencial[edge->to] -= pushment;

		pushFlow(layeredNet, nextVertex, (pushingFlow > 0 ? pushment : -pushment), innerPotencial, outerPotencial, isDeleted);

		if (excessOrLack == 0)
			break;
	}