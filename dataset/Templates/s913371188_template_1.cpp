template <typename Vertex, typename Edge>
struct Graph
{
	// 頂点
	vector<Vertex> vertices;
	// 第i頂点を始点とする有向辺の終点
	vector<unordered_map<int, Edge>> edges;

	// n個の頂点を事前に生成する
	void resize (size_t n)
	{
		vertices.resize(n);
		edges.resize(n);
	}