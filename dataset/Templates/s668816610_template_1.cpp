template <typename itr> void output(itr first, itr last) {
  for (auto iter = first; iter != last; ++iter) {
    for (int i : *iter) {
      if (i == INF)
        cerr << "INF"
             << ", ";
      else
        cerr << i << ", ";
    }