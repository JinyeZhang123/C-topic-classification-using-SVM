template <class Edge>
void pushFlowToSink (Net<Edge> &layeredNet, const typename Edge::IndexType &root, const typename Edge::CapacityType &pushingFlow, vector<typename Edge::CapacityType> &innerPotencial, vector<typename Edge::CapacityType> &outerPotencial, vector<bool> &isDeleted) {
	vector<typename Edge::CapacityType> excess(layeredNet.getVerticesCount(), 0);
	excess[root] = pushingFlow;
	queue<typename Edge::IndexType> verticesQueue;
	vector<bool> used(layeredNet.getVerticesCount(), false);
	verticesQueue.push(root);

	while (!verticesQueue.empty()) {
		typename Edge::IndexType vertex = verticesQueue.front();
		verticesQueue.pop();

		if (used[vertex])
			continue;

		used[vertex] = true;

		if (vertex == layeredNet.sink)
			break;

		typename Net<Edge>::EdgeIterator &iter = layeredNet.getOuterEdgeIterator(vertex);

		while (excess[vertex] > 0) {
			Edge &edge = iter.get();

			if (edge.recidualCapacity() > 0 && !isDeleted[edge.to]) {
				typename Edge::CapacityType delta = min<typename Edge::CapacityType>(excess[edge.from], edge.recidualCapacity());
				excess[edge.from] -= delta;
				excess[edge.to] += delta;
				edge.flow += delta;
				edge.reverseEdge->flow -= delta;
				outerPotencial[edge.from] -= delta;
				innerPotencial[edge.to] -= delta;

				if (outerPotencial[edge.from] == 0)
					deleteVertex(layeredNet, edge.from, innerPotencial, outerPotencial, isDeleted);

				verticesQueue.push(edge.to);
			}