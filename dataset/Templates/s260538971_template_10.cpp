template <class Edge>
inline typename Edge::FlowType getPotencial (const Net<Edge> &net, const typename Edge::IndexType &vertex, const vector<typename Edge::FlowType> &innerPotencial, const vector<typename Edge::FlowType> &outerPotencial) {
	if (vertex == net.source)
		return outerPotencial[vertex];

	else if (vertex == net.sink)
		return innerPotencial[vertex];

	else
		return min<typename Edge::FlowType>(outerPotencial[vertex], innerPotencial[vertex]);
}