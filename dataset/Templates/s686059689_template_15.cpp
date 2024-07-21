template <class Edge>
typename Edge::CapacityType MKM (Net<Edge> &net) {
	typename Edge::CapacityType maxFlow = 0;
	typename Edge::CapacityType blockingFlow;

	do {
		Net<Edge> layeredNet = buildLayeredNet(net);
		blockingFlow = setBlockingFlow(layeredNet);


		break;
		maxFlow += blockingFlow;
		setBlockingFlowToNet(net, layeredNet);
	}