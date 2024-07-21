vvl operator*(vvl &a, vvl &b)
{
	vvl res(n, vl(n, 0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
				res[i][j] = (res[i][j] + (a[i][k] * b[k][j]) % MOD) % MOD;
		}