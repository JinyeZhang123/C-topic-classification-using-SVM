template<typename T>
T diameter(vector<vector<pair<int,T> > >&G)
{
	pair<T,int>p=diameter_dfs(G,0,-1);
	pair<T,int>q=diameter_dfs(G,p.second,-1);
	return q.first;
}