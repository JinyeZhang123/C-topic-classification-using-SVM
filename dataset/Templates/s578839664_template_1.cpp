template <class RandomIt>
size_t isort(RandomIt first, RandomIt last, ptrdiff_t g) {
    using T=typename RandomIt::value_type;
    size_t count_=0;
    for (RandomIt it=first+g; it<last; ++it) {
        T v=*it;
        RandomIt it2;
        for (it2=it-g; it2>=first&&v<*it2; it2-=g) {
            it2[g] = it2[0];
            ++count_;
        }