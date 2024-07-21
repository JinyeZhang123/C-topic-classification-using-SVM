template <typename T>
void shell_sort(T a[], size_t n){
  make_gap_table(n);
  long long count = 0;
  for(auto const &v : gaps){
    count += insertion_sort(a,n,v);
  }