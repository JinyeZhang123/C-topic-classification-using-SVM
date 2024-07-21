template <class Edge>
typename Edge::CapacityType tryAugmentFlow (Net<Edge> &layeredNet, const typename Edge::IndexType &vertex, const typename Edge::CapacityType &augmentation = numeric_limits<typename Edge::CapacityType>::max()) {
	if (vertex == layeredNet.sink || augmentation == 0)
		return augmentation;
	
	for (typename Net<Edge>::EdgeIterator iter = layeredNet.getOuterEdgeIterator(vertex); !iter.isEnd(); iter.move()) {
		Edge *edge = iter.get();

		if (edge->capacity == 0)
			continue;

		typename Edge::CapacityType newExcess = min<typename Edge::CapacityType>(augmentation, edge->recidualCapacity());
		typename Edge::CapacityType augmentedFlow = tryAugmentFlow(layeredNet, edge->to, newExcess);

		if (augmentedFlow != 0) {
			edge->flow += augmentedFlow;
			edge->reverseEdge->flow -= augmentedFlow;
			return augmentedFlow;
		}