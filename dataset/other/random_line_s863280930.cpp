  for (int i = n - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<1|1];
