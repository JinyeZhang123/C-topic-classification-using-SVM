template <class Edge>
Net<Edge> buildLayeredNet (const Net<Edge> &net) {
	Net<Edge> layeredNet(net.getVerticesCount());
	layeredNet.source = net.source;
	layeredNet.sink = net.sink;
	vector<typename Edge::IndexType> layers(net.getVerticesCount(), numeric_limits<typename Edge::IndexType>::max());
	layers[net.source] = 0;

	
	queue<typename Edge::IndexType> verticesQueue;
	vector<bool> used(net.getVerticesCount(), false);
	verticesQueue.push(net.source);

	while (!verticesQueue.empty()) {
		typename Edge::IndexType vertex = verticesQueue.front();
		verticesQueue.pop();

		if (used[vertex])
			continue;

		used[vertex] = true;

		for (const Edge &edge: net.getConstOuterEdges(vertex)) {
			if (edge.recidualCapacity() > 0 && layers[edge.from] < layers[edge.to]) {
				verticesQueue.push(edge.to);
				layers[edge.to] = layers[edge.from] + 1;
				layeredNet.addEdge(edge);
			}