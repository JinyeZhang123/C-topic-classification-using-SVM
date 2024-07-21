template <class Edge>
typename Edge::FlowType findBlockingFlowDinic (Net<Edge> &layeredNet) {
	typename Edge::FlowType blockingFlow = 0;

	while (true) {
		typename Edge::FlowType augmentedFlow = tryAugmentFlow(layeredNet, layeredNet.source);
		if (augmentedFlow == 0)
			break;
		
		else
			blockingFlow += augmentedFlow;
	}