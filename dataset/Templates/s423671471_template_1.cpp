template <typename Type> class RMQ
{
private:

	int size;

	vector<Type> minvalue;

	Type _query(int a, int b, int k, int l, int r)
	{
		if (r <= a || b <= l) { return INF; }