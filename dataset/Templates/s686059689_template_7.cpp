template <class Edge>
typename Edge::CapacityType countInnerPotencial (const Net<Edge> &net, const typename Edge::IndexType &vertex) {
	typename Edge::CapacityType innerPotencial = 0;

	for (const Edge &edge: net.getConstInnerEdges(vertex))
		innerPotencial += edge.recidualCapacity();

	return innerPotencial;
}