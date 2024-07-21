ModInt operator/(ModInt a, ModInt b) {
	return a * inv(b);
}