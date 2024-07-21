template <class Edge>
typename Edge::FlowType findBlockingFlowWithMalhotraKumarMaheshwari (Net<Edge> &layeredNet) {
	// Initialize potencials:
	vector<typename Edge::FlowType> innerPotencial(layeredNet.getVerticesCount());
	vector<typename Edge::FlowType> outerPotencial(layeredNet.getVerticesCount());

	for (typename Edge::IndexType vertex = 0; vertex < layeredNet.getVerticesCount(); vertex ++) {
		innerPotencial[vertex] = setPotencial(layeredNet, layeredNet.getConstInnerEdgeIterator(vertex));
		outerPotencial[vertex] = setPotencial(layeredNet, layeredNet.getConstOuterEdgeIterator(vertex));
	}