template <class Edge>
typename Edge::CapacityType dischargeHighest (Net<Edge> &net) {
	vector<typename Edge::CapacityType> excess(net.getVerticesCount(), 0);
	vector<typename Edge::IndexType> height(net.getVerticesCount(), 0);
	height[net.source] = net.getVerticesCount();

	for (Edge &edge: net.getOuterEdges(net.source)) {
		edge.flow += edge.capacity;
		edge.reverseEdge->flow -= edge.capacity;

		if (edge.to != net.sink && edge.capacity > 0)
			excess[edge.to] += edge.capacity;
	}