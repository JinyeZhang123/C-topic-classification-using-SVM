template <class Edge>
void deleteVertex (const Net<Edge> &layeredNet, const typename Edge::IndexType &vertex, vector<typename Edge::CapacityType> &innerPotencial, vector<typename Edge::CapacityType> &outerPotencial, vector<bool> &isDeleted) {
	isDeleted[vertex] = true;
	cout << vertex << endl;

	for (const Edge &edge: layeredNet.getConstInnerEdges(vertex)) {
		if (isDeleted[edge.from] || edge.capacity == 0)
			continue;

		outerPotencial[edge.from] -= edge.recidualCapacity();

		if (outerPotencial[edge.from] == 0)
			deleteVertex(layeredNet, edge.from, innerPotencial, outerPotencial, isDeleted);
	}