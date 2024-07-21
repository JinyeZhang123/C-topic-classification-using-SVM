template <class Edge>
inline typename Edge::CapacityType getPotencial (const Net<Edge> &net, const typename Edge::IndexType &vertex, const vector<typename Edge::CapacityType> &innerPotencial, const vector<typename Edge::CapacityType> &outerPotencial) {
	if (vertex == net.source)
		return outerPotencial[vertex];

	else if (vertex == net.sink)
		return innerPotencial[vertex];

	else
		return min<typename Edge::CapacityType>(outerPotencial[vertex], innerPotencial[vertex]);
}