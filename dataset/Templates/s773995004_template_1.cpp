template<typename T>
struct MF{
	vector<vector<pair<pair<int,int>,T> > >G;
	vector<int>used;
	MF(int n_=0):G(n_),used(n_,0){}