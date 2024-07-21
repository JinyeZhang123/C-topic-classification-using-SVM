template<class H, class... T> void write(const H& h, const T&... t) {
	write(h);
	write(t...);
}