template <class Edge>
void push (Net<Edge> &net, Edge *edge, vector<typename Edge::FlowType> &excess) {
	typename Edge::FlowType delta = min<typename Edge::FlowType>(excess[edge->from], edge->recidualCapacity());
	edge->flow += delta;
	edge->reverseEdge->flow -= delta;
	excess[edge->from] -= delta;
	excess[edge->to] += delta;
}