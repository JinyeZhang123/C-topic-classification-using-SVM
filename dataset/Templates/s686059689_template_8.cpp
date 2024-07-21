template <class Edge>
typename Edge::CapacityType countOuterPotencial (const Net<Edge> &net, const typename Edge::IndexType &vertex) {
	typename Edge::CapacityType outerPotencial = 0;

	for (const Edge &edge: net.getConstOuterEdges(vertex))
		outerPotencial += edge.recidualCapacity();

	return outerPotencial;
}