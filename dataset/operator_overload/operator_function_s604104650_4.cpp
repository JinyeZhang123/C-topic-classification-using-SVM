cPoint operator/(const double& d)
	{
		if (d != 0.0)
		{
			return cPoint(mx / d, my / d);
		}