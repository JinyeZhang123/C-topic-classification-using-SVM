Polynomial operator+=(const Polynomial& p) {
    for (int i = 0; i < p.size(); ++i) {
      if (int(val.size()) == i) val.emplace_back(p[i]);
      else val[i] += p[i];
    }