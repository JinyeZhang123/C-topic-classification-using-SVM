template <class Edge>
void printNet (Net<Edge> &net, ostream &os = cout) {
	for (typename Edge::IndexType vertex = 0; vertex < net.getVerticesCount(); vertex ++) {
		typename Net<Edge>::EdgeIterator iter = net.getConstOuterEdgeIterator(vertex);

		for (iter.setBegin(); !iter.isEnd(); iter.move()) {
			iter.get()->print(cout);
			cout << " ";
		}