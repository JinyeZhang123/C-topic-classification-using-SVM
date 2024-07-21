template <typename Iter, typename Cmp>
Iter partition(Iter begin, Iter end, Iter pivot, Cmp cmp) {
  if (distance(pivot, end) != 1) {
    iter_swap(end -1, pivot);
    pivot = end - 1;
  }