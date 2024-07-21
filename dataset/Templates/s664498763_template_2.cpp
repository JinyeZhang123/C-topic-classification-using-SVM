template <typename Iter, typename Cmp>
void quickSort(Iter begin, Iter end, Cmp cmp) {
  auto p = partition(begin, end, end - 1, cmp);
  if (p != begin) {
    quickSort(begin, p, cmp);
    quickSort(p, end, cmp);
  }