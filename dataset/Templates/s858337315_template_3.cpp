template<class T>
void compress(vector<T> v, map<T, int>& zip, vector<T>& unzip)
{
	sort(ALL(v));
	v.erase(unique(ALL(v)), v.end());
	unzip.resize(v.size());
	REP(i, v.size())
	{
		zip[v[i]] = i;
		unzip[i] = v[i];
	}