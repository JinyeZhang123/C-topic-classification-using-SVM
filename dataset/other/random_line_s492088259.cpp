		int ways = mul(ncr(i - 1, n - 1 - i), mul(fat[i], mul(fat[n - 1 - i], 1)));
