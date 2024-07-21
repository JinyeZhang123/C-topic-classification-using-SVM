Matrix operator*(Matrix a, Matrix b) {
	Matrix c;
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			for (int k = 0; k < 50; k++) {
				c.val[i][j] += a.val[i][k] * b.val[k][j] % MOD;
				c.val[i][j] %= MOD;
			}