template<class H, class... T> void print(const H& h, const T&... t) {
	write(h);
	if (sizeof...(t))
		write(' ');
	print(t...);
}