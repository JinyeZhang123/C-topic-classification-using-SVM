template <typename Cost>
class BellmanFord {
private:
	struct Edge {
		int src, dst;
		Cost cost;
	}