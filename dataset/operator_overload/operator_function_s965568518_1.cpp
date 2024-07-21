mat operator*(mat &o)
	{
		mat res;
		res.n = n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				res.a[i][j] = 0;
				for(int k = 0;k<n;k++)
				{
					res.a[i][j] += (a[i][k]*o.a[k][j])%M;
					res.a[i][j] %= M;
				}