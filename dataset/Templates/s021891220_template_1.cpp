template <class RandomIt, class T=typename RandomIt::value_type>
void csort(RandomIt first, RandomIt last, T ub) {
    /* Counting sort */
    vector<T> counter(ub+1);
    for (RandomIt it=first; it<last; ++it)
        ++counter[*it];

    for (RandomIt it=counter.begin()+1; it<counter.end(); ++it)
        *it += it[-1];

    vector<T> output(last-first);
    for (RandomIt it=last-1; it>=first; --it) {
        output[counter[*it]-1] = *it;
        --counter[*it];
    }