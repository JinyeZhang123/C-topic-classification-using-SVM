template <class RandomIt>
RandomIt partition_(RandomIt first, RandomIt last) {
    using T=typename RandomIt::value_type;
    T x=last[-1];
    RandomIt it=first-1;
    for (RandomIt it2=first; it2<last-1; ++it2)
        if (*it2 <= x) {
            ++it;
            swap(*it, *it2);
        }