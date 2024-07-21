template <class Edge>
void discharge (Net<Edge> &net, const typename Edge::IndexType &vertex, vector<typename Edge::FlowType> &excess, vector<typename Edge::IndexType> &height) {
	while (excess[vertex] > 0) {
		typename Net<Edge>::EdgeIterator &iter = net.getOuterEdgeIterator(vertex);

		if (iter.isEnd()) {
			relabel(net, vertex, height);
			iter.setBegin();
		}