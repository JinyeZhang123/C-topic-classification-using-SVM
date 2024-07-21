	return (a == 1 ? 1 : (1 - p * inv(p%a, a)) / a + p);
