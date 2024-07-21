template <typename X>
struct btmax_t
{
	vector<X> t;
	int base;
	btmax_t(int n)
	{
		for(base=1;base<n;base*=2)
			;
		t.resize(base*2);
	}