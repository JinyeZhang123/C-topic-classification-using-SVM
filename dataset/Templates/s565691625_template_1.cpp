template <typename Type> class RSQ
{
private:

	int size;

	vector<Type> sumvalue;

	Type _query(int a, int b, int k, int l, int r)
	{
		if (r <= a || b <= l) { return 0; }