template <class Edge>
void push (Net<Edge> &net, Edge &edge, vector<typename Edge::CapacityType> &excess) {
	typename Edge::CapacityType delta = min<typename Edge::CapacityType>(excess[edge.from], edge.recidualCapacity());
	edge.flow += delta;
	edge.reverseEdge->flow -= delta;
	excess[edge.from] -= delta;
	excess[edge.to] += delta;
}