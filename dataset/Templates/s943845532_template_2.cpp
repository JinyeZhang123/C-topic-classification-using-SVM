template <class T = long long>
class Dinic {
   private:
	int ver;  //頂点数
	vector<vector<edge<T>>> edges;
	vector<int> level;
	vector<int> chk;

   public:
	Dinic(int vertex) : ver(vertex), edges(vertex), level(vertex, -1), chk(vertex, 0) {}