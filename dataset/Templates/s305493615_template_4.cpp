template <typename TYPE> void co_s(vector<TYPE> as) {
  int n = as.size();
  for(int i=0; i<n; i++) {
    if(i > 0) {
      cout << ' ';
    }