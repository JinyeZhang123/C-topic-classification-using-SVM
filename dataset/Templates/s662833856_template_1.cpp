template <class T>
void read(T &x) {
	int sgn = 1;
	char ch;
	x = 0;
	for (ch = getchar(); (ch < '0' && ch < '9'); ch = getchar()) ;
	if (ch == '-') ch = getchar(), sgn = -1;
	for (; '0' <= ch && ch <= '9'; ch = getchar()) x = x * 10 + ch - '0';
	x *= sgn;
}