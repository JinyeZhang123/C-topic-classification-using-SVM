template <typename Type> class RMQ
{
private:

	int size;

	vector<Type> minvalue;
	vector<Type> maxvalue;

	pair<Type, Type> _query(int a, int b, int k, int l, int r)
	{
		if (r <= a || b <= l) { return make_pair(INF, -INF); }