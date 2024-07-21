template <class T>
void write(T x) {
	if (x < 0) putchar('-'), write(-x);
	else if (x < 10) putchar(x + '0');
	else write(x / 10), putchar(x % 10 + '0');
}