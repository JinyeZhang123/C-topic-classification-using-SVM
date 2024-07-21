ModInt operator-(ModInt a, ModInt b) {
	return ModInt((a.x - b.x + M) % M);
}