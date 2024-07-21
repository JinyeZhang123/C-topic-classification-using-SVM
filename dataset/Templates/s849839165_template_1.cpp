template <class RandomIt>
size_t msort(RandomIt first, RandomIt last) {
    if (first+1 >= last) return 0;

    using T=typename RandomIt::value_type;
    ptrdiff_t lhalf=(last-first)>>1;
    RandomIt mid=first+lhalf;

    size_t count_=0;
    count_ += msort(first, mid);
    count_ += msort(mid, last);

    ptrdiff_t rhalf=last-mid;
    vector<T> L(lhalf+1), R(rhalf+1);

    for (ptrdiff_t i=0; i<lhalf; ++i)
        L[i] = first[i];

    for (ptrdiff_t i=0; i<rhalf; ++i)
        R[i] = mid[i];

    L[lhalf] = R[rhalf] = INF;

    size_t i=0, j=0;
    for (RandomIt it=first; it<last; ++it) {
        if (L[i] <= R[j]) {
            *it = L[i];
            ++i;
        }