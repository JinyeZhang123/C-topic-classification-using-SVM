template<class Iterator>
	void build(const Iterator st, const Iterator ed) {
		Iterator it = st; int cur = rr - 1;
		while (it != ed) dat[cur++] = (*it++);
		for (int i = rr - 2; i >= 0; i--)
			dat[i] = qur(dat[i * 2 + 1], dat[i * 2 + 2]);
	}