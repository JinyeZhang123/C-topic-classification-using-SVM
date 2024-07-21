template <class RandomIt, class Comp>
void qsort(RandomIt first, RandomIt last, Comp comp) {
    if (first >= last) return;

    RandomIt pivot=partition_(first, last, comp);
    qsort(first, pivot, comp);
    qsort(pivot+1, last, comp);
}