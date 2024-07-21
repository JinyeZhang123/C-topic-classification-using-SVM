template <typename T>
struct towdimBIT
{
private:
	vector< vector<T> > array;
	const int n;
	const int m;
 
public:
	towdimBIT(int _n,int _m):
		array(_n+1,vector<T>(_m+1,0)), n(_n),m(_m){}