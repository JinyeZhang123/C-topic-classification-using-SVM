template<typename T>
T f(T s, T e, int &A, vi &v) {
	for (T i = s + 1; i != e; i++)
		if (*i > *s)
			s = i;
		else if (*i == *s) {
			int l = 0;
			for (T j = s; j != i; j++)
				l +=  *s * 2 - *j - *(j + 1);
			if (l) {
				l /= 2;
				v.push_back(l);
				A += l;
			}