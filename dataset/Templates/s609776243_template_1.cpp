template <class RandomIt, class Comp>
RandomIt partition_(RandomIt first, RandomIt last, Comp comp) {
    using T=typename RandomIt::value_type;
    T x=last[-1];
    RandomIt it=first-1;
    for (RandomIt it2=first; it2<last-1; ++it2)
        if (!comp(x, *it2)) {
            ++it;
            swap(*it, *it2);
        }