template <class RandomIt, class Comp>
size_t msort(RandomIt first, RandomIt last, Comp comp) {
    if (first+1 >= last) return 0;

    using T=typename RandomIt::value_type;
    ptrdiff_t lhalf=(last-first)>>1;
    RandomIt mid=first+lhalf;

    size_t count_=0;
    count_ += msort(first, mid, comp);
    count_ += msort(mid, last, comp);

    ptrdiff_t rhalf=last-mid;
    vector<T> L(lhalf+1), R(rhalf+1);

    for (RandomIt in=first, out=L.begin(); in<mid; (++in, ++out))
        *out = *in;

    for (RandomIt in=mid, out=R.begin(); in<last; (++in, ++out))
        *out = *in;

    L[lhalf] = R[rhalf] = INF;

    RandomIt l=L.begin(), r=R.begin();
    for (RandomIt it=first; it<last; ++it) {
        *it = *(!comp(*r, *l)? l:r)++;
        ++count_;
    }