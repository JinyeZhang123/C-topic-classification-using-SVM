template<class T, class C = std::less<>>
void mergeSort(T first, T last, C cmp = C()) {
    const auto N = std::distance(first, last);
    if (N <= 1) return;
    const auto mid = std::next(first, N / 2);
    mergeSort(first, mid, cmp);
    mergeSort(mid, last, cmp);
    std::inplace_merge(first, mid, last, cmp);
}