bool operator<(nde& n2) {
		if (val % id == 0)return true;
		if (n2.val % n2.id == 0)return true;
		int t1 = id - val % id;
		int t2 = n2.id - n2.val % n2.id;
		if (t1 != t2)return t1 < t2;
		return val > n2.val;
	}