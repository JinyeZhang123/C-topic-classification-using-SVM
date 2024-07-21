template <class Edge>
typename Edge::FlowType tryAugmentFlow (Net<Edge> &layeredNet, const typename Edge::IndexType &vertex, const typename Edge::FlowType &augmentation = numeric_limits<typename Edge::FlowType>::max()) {
	if (vertex == layeredNet.sink || augmentation == 0)
		return augmentation;
	
	for (typename Net<Edge>::EdgeIterator iter = layeredNet.getConstOuterEdgeIterator(vertex); !iter.isEnd(); iter.move()) {
		Edge *edge = iter.get();

		if (edge->capacity == 0)
			continue;

		typename Edge::FlowType newExcess = min<typename Edge::FlowType>(augmentation, edge->recidualCapacity());
		typename Edge::FlowType augmentedFlow = tryAugmentFlow(layeredNet, edge->to, newExcess);

		if (augmentedFlow != 0) {
			edge->flow += augmentedFlow;
			edge->reverseEdge->flow -= augmentedFlow;
			return augmentedFlow;
		}