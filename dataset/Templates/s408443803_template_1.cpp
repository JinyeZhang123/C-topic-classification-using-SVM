template<int MV> class SCC {
public:
	vector<vector<int> > SC; int NV, GR[MV], rev[MV];
private:
	vector<int> E[MV], RE[MV], NUM; int vis[MV];
public:
	void init(int NV) { this->NV = NV; for (int i = 0; i<MV; i++) { E[i].clear(); RE[i].clear(); }