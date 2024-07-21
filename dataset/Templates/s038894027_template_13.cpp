template <class Edge>
void transwerFlowFromLayeredNetworkToNetwork (Net<Edge> &layeredNet, Net<Edge> &net) {
	// BFS init:
	queue<typename Edge::IndexType> verticesQueue;
	vector<bool> used(net.getVerticesCount(), false);
	verticesQueue.push(net.source);

	// Layered Net init:
	vector<typename Edge::IndexType> layers(net.getVerticesCount(), numeric_limits<typename Edge::IndexType>::max());
	layers[net.source] = 0;

	// BFS:
	while (!verticesQueue.empty()) {
		typename Edge::IndexType vertex = verticesQueue.front();
		verticesQueue.pop();

		if (used[vertex])
			continue;

		used[vertex] = true;
		
		typename Net<Edge>::EdgeIterator iter = net.getConstOuterEdgeIterator(vertex);
		typename Net<Edge>::EdgeIterator &layeredNetIter = layeredNet.getOuterEdgeIterator(vertex);
		layeredNetIter.setBegin();

		for (iter.setBegin(); !iter.isEnd() && !layeredNetIter.isEnd(); iter.move()) {
			Edge *edge = iter.get();

			if (edge->recidualCapacity() > 0 && layers[edge->from] + 1 <= layers[edge->to]) {
				verticesQueue.push(edge->to);

				layers[edge->to] = layers[edge->from] + 1;

				while (layeredNetIter.get()->capacity == 0)
					layeredNetIter.move();
				
				iter.get()->flow += layeredNetIter.get()->flow;
				iter.get()->reverseEdge->flow -= layeredNetIter.get()->flow;
				layeredNetIter.move();	
			}