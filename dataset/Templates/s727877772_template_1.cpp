template<typename T>
pair<T,int>diameter_dfs(vector<vector<pair<int,T> > >&G,int u,int p)
{
	pair<T,int>ans(0,u);
	for(pair<int,T>&e:G[u])
	{
		if(e.first!=p)
		{
			pair<T,int>q=diameter_dfs(G,e.first,u);
			q.first+=e.second;
			ans=max(ans,q);
		}