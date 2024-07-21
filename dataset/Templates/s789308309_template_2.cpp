template <typename T>
void shell_sort(T a[], size_t n){
  make_gap_table(n);
  size_t count = 0;
  for(auto it = gaps.rbegin(); it != gaps.rend(); it++){
    count += insertion_sort(a,n,*it);
  }