fastIO operator<<(const long double& num)
	{
		printf("%.20Lf",num);
		return *this;
	}