template <class Iterator>
unsigned long long count_inversions(Iterator first, Iterator last) {
    int size = distance(first, last);
    typedef typename iterator_traits<Iterator>::value_type T;
    pair<T, int> *a = new pair<T, int>[size];
    for (int i = 0; i < size; ++i) {
        a[i] = pair<T, int>(*(first + i), i);
    }