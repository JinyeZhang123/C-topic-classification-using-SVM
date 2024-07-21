template<typename T>
	inline void print(T x, char ch = '\n') {
		print_(x);
		putchar(ch);
	}