template <class Edge>
typename Edge::CapacityType setBlockingFlow (Net<Edge> &layeredNet) {
	vector<typename Edge::CapacityType> innerPotencial(layeredNet.getVerticesCount());
	vector<typename Edge::CapacityType> outerPotencial(layeredNet.getVerticesCount());
	vector<bool> isDeleted(layeredNet.getVerticesCount(), false);

	for (typename Edge::IndexType vertex = 0; vertex < layeredNet.getVerticesCount(); vertex ++) {
		innerPotencial[vertex] = countInnerPotencial(layeredNet, vertex);
		outerPotencial[vertex] = countOuterPotencial(layeredNet, vertex);
	}