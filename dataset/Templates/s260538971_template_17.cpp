template <class Edge>
typename Edge::FlowType findMaxFlowWithAugmentionPaths (Net<Edge> &net) {
	typename Edge::FlowType maxFlow = 0;

	while (true) {
		Net<Edge> layeredNet = buildLayeredNetwork(net);
		typename Edge::FlowType blockingFlow = findBlockingFlowMKM(layeredNet);

		if (blockingFlow == 0)
			break;

		else {
			transwerFlowFromLayeredNetworkToNetwork(layeredNet, net);
			maxFlow += blockingFlow;
		}