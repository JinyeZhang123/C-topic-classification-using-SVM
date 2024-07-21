template <class Edge>
void pushFlowFromSource (Net<Edge> &layeredNet, const typename Edge::IndexType &root, const typename Edge::CapacityType &pushingFlow, vector<typename Edge::CapacityType> &innerPotencial, vector<typename Edge::CapacityType> &outerPotencial, vector<bool> &isDeleted) {
	vector<typename Edge::CapacityType> lack(layeredNet.getVerticesCount(), 0);
	lack[root] = pushingFlow;
	queue<typename Edge::IndexType> verticesQueue;
	vector<bool> used(layeredNet.getVerticesCount(), false);
	verticesQueue.push(root);

	while (!verticesQueue.empty()) {
		typename Edge::IndexType vertex = verticesQueue.front();
		verticesQueue.pop();

		if (used[vertex])
			continue;

		used[vertex] = true;

		if (vertex == layeredNet.source)
			break;

		typename Net<Edge>::EdgeIterator &iter = layeredNet.getInnerEdgeIterator(vertex);

		while (lack[vertex] > 0) {
			Edge &edge = iter.get();

			if (edge.recidualCapacity() > 0 && !isDeleted[edge.from]) {
				typename Edge::CapacityType delta = min<typename Edge::CapacityType>(lack[edge.to], edge.recidualCapacity());
				lack[edge.from] += delta;
				lack[edge.to] -= delta;
				edge.flow += delta;
				edge.reverseEdge->flow -= delta;
				outerPotencial[edge.from] -= delta;
				innerPotencial[edge.to] -= delta;

				if (innerPotencial[edge.to] == 0)
					deleteVertex(layeredNet, edge.to, innerPotencial, outerPotencial, isDeleted);

				verticesQueue.push(edge.from);
			}