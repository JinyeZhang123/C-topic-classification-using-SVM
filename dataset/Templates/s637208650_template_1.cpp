template<typename T>
struct MF{
	vector<vector<pair<pair<int,int>,T> > >G;
	vector<int>level,iter;
	MF(int n_=0):G(n_),level(n_),iter(n_){}