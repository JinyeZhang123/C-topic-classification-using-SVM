void operator+=(const int &v)
	{
		int t = v;
		for (int i = 1; t && i <= l; ++i)
		{
			w -= a[i], t += a[i];
			w += (a[i] = t % 10);
			if ((t /= 10) > 0 && i == l)
				++l;
		}