template <class Edge>
typename Edge::FlowType countPotencial (const Net<Edge> &net, typename Net<Edge>::EdgeIterator iter) {
	typename Edge::FlowType potencial = 0;

	for (iter.setBegin(); !iter.isEnd(); iter.move())
		potencial += iter.get()->recidualCapacity();

	return potencial;
}