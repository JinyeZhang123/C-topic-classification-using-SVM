template <class T> void swapQ(T *a, T *b, T *c, T *d)
{
	T buf;

	buf = *a;
	*a = *b;
	*b = *c;
	*c = *d;
	*d = buf;
}