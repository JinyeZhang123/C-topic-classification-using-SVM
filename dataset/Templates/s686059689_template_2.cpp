template <class Edge>
void lift (const Net<Edge> &net, const typename Edge::IndexType &vertex, vector<typename Edge::IndexType> &height) {
	typename Edge::IndexType minHeight = 1000000000;

	for (const Edge& edge: net.getConstOuterEdges(vertex))
		if (edge.recidualCapacity() > 0)
			minHeight = min<typename Edge::IndexType>(minHeight, height[edge.to]);
	
	height[vertex] = minHeight + 1;
}