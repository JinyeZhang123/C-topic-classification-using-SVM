template <typename T>
struct ReRooting{
	int N;
	vector<int> u,v;
	vector< vector<int> > G;
	vector< map<int,int> > ma; //ma[ i ][ G[i][j] ] = j;
	vector<T> val;


}