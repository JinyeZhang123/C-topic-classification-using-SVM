template <class Edge>
typename Edge::CapacityType findBlockingFlow (Net<Edge> &layeredNet) {
	typename Edge::CapacityType blockingFlow = 0;

	while (true) {
		typename Edge::CapacityType augmentedFlow = tryAugmentFlow(layeredNet, layeredNet.source);
		if (augmentedFlow == 0)
			break;
		
		else
			blockingFlow += augmentedFlow;
	}