Polynomial operator*(Polynomial& p) {
		Polynomial res(size() + p.size());
    for (int i = 0; i < size(); ++i) {
      for (int j = 0; j < p.size(); ++j) {
        res[i + j] += val[i] * p[j];
      }