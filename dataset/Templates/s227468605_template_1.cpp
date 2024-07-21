template <typename T>
class dinic{
private:
	unordered_map<int,unordered_map<int,T>> mp;
	unordered_map<int,int> level;
	unordered_set<string> visited;
public:
	void add_edge(int from, int to, T cap){
		mp[from][to] = cap;
		mp[to][from] = 0;
	}