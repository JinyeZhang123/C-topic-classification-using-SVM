int256 operator*(int256 e) {
		int256 r(0);
		for (int i = 0; i < bts; i++) for (int j = 0; j < bts; j++) {
			int256 p(0);
			int64_t s = d[i], t = e.d[j];
			int64_t u = s * t;
			if(i + j < bts) p.d[i + j] = u % INT32_MAX;
			if(i + j + 1 < bts) p.d[i + j + 1] = u / INT32_MAX;
			r = r + p;
		}