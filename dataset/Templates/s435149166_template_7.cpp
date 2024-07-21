template <class Edge>
typename Edge::CapacityType findMaxFlow (Net<Edge> &net) {
	typename Edge::CapacityType maxFlow = 0;

	while (true) {
		Net<Edge> layeredNet = buildLayeredNetwork(net);
		typename Edge::CapacityType blockingFlow = findBlockingFlow(layeredNet);

		if (blockingFlow == 0)
			break;

		else {
			transwerFlowFromLayeredNetworkToNetwork(layeredNet, net);
			maxFlow += blockingFlow;
		}