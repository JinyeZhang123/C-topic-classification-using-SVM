int256 operator+(int256 e) {
		int256 r(0);
		for (int i = 0; i < bts; i++) {
			int64_t j = d[i], k = e.d[i];
			if (r.d[i] + j + k > INT32_MAX) {
				r.d[i] += (j + k - INT32_MAX);
				if (i + 1 < bts) r.d[i + 1]++;
			}