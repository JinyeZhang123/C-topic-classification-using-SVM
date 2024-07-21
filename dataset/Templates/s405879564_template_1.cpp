template<class T>
void read(T &x) {
	x = 0;
	ll f = 1;char ch = getchar();
	for (;!isdigit(ch);ch = getchar()) 
		if (ch == '-') f = -1;
	for (; isdigit(ch);ch = getchar())
		x = (x << 1) + (x << 3) + ch - '0';
	x *= f;
}