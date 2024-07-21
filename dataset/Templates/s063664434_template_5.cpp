template<size_t S> string to_string(bitset<S> b) {
	string res;
	FOR(S)
		res += char('0' + b[i]);
	return res;
}