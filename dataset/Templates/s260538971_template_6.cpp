template <class Edge>
typename Edge::FlowType findMaxFlowWithPreflowPush (Net<Edge> &net) {
	vector<typename Edge::FlowType> excess(net.getVerticesCount(), 0);
	vector<typename Edge::IndexType> height(net.getVerticesCount(), 0);
	height[net.source] = net.getVerticesCount();

	typename Net<Edge>::EdgeIterator iter = net.getConstOuterEdgeIterator(net.source);

	for (iter.setBegin(); !iter.isEnd(); iter.move()) {
		Edge *edge = iter.get();

		edge->flow += edge->capacity;
		edge->reverseEdge->flow -= edge->capacity;

		if (edge->to != net.sink && edge->capacity > 0)
			excess[edge->to] += edge->capacity;
	}