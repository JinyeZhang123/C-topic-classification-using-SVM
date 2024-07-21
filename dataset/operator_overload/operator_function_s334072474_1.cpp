IO operator>>(T &n) {
		n = 0; bool s = 0; char c = gc();
		while (c < '0' || c > '9') s |= c == '-', c = gc();
		while (c >= '0' && c <= '9') n = n * 10 + (c ^ 48), c = gc();
		if (s) n = -n;
		return *this;
	}