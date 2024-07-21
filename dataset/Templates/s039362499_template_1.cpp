template<typename T>
inline void read(T &num) {
	T x = 0, f = 1; char cch = getchar();
	for (; cch > '9' || cch < '0'; cch = getchar()) if (cch == '-') f = -1;
	for (; cch <= '9' && cch >= '0'; cch = getchar()) x = (x << 3) + (x << 1) + (cch ^ '0');
	num = x * f;
}