template <class Edge>
void deleteVertex (const Net<Edge> &layeredNet, const typename Edge::IndexType &vertex, vector<typename Edge::FlowType> &innerPotencial, vector<typename Edge::FlowType> &outerPotencial, vector<bool> &isDeleted) {
	if (isDeleted[vertex])
		return;

	isDeleted[vertex] = true;

	typename Net<Edge>::EdgeIterator innerIter = layeredNet.getConstInnerEdgeIterator(vertex);

	for (innerIter.setBegin(); !innerIter.isEnd(); innerIter.move()) {
		Edge *edge = innerIter.get();

		if (edge->capacity == 0)
			continue;

		outerPotencial[edge->from] -= edge->recidualCapacity();

		if (getPotencial(layeredNet, edge->from, innerPotencial, outerPotencial) == 0)
			deleteVertex(layeredNet, edge->from, innerPotencial, outerPotencial, isDeleted);
	}