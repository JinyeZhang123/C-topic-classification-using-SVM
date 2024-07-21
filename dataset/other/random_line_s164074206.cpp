  cout << (any_of(begin(v[1]), end(v[1]), [&](int s) { return v[s].count(N); })
