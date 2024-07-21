template<class A, size_t S> void read(array<A, S>& x) {
	EACH(a, x)
		read(a);
}