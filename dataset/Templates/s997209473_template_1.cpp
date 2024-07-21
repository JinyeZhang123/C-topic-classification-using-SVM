template <typename T>
long long insertion_sort(T a[], size_t n, size_t gap = 1){
  long long count = 0;
  for(size_t i = gap; i < n; i++){
    T v = a[i];
    int j = i - gap;
    while(j >= 0 && a[j] > v){
      a[j+gap] = a[j];
      j -= gap;
      count++;
    }