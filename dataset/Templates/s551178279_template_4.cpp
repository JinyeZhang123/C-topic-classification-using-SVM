template <typename T>
void merge_sort(vector<T> &a, int l, int r){
  if(l + 1 < r){
    int m = (l + r) / 2;
    merge_sort<T>(a, l, m);
    merge_sort<T>(a, m, r);
    merge<T>(a, l, m, r);
  }