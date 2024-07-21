template <typename Type, class Calculate> class RMQ
{
private:

	int size;

	std::vector<Type> value;

	Type _query(int a, int b, int k, int l, int r)
	{
		if (r <= a || b <= l) { return val; }