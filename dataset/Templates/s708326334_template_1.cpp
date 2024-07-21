template <typename Iter>
Iter partition(Iter begin, Iter end, Iter pivot) {
  if (distance(pivot, end) != 1) {
    iter_swap(end -1, pivot);
    pivot = end - 1;
  }