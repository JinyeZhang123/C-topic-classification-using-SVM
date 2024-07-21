class SegTree

{

public:

	int n;

	T T_max;

	vector<T> dat;

	SegTree(int n_, T t_max)

	{

		int n = 1;

		T_max = t_max;

		while (n < n_)n *= 2;

		for (int i = 0; i < 2 * n - 1; i++)dat.push_back(t_max);

	}