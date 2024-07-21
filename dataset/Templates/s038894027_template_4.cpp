template <class Edge>
void relabel (const Net<Edge> &net, const typename Edge::IndexType &vertex, vector<typename Edge::IndexType> &height) {
	typename Edge::IndexType minHeight = numeric_limits<typename Edge::IndexType>::max();

	typename Net<Edge>::EdgeIterator iter = net.getConstOuterEdgeIterator(vertex);

	for (iter.setBegin(); !iter.isEnd(); iter.move()) {
		Edge *edge = iter.get();

		if (edge->recidualCapacity() > 0)
			minHeight = min<typename Edge::IndexType>(minHeight, height[edge->to]);
	}