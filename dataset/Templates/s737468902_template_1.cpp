template<typename CONTAINER>
void bubble_sort(CONTAINER & iterable){
    int N = iterable.size();
    for (int i = 0; i != N; ++i){
        for (int j = N - 1; j != i; --j){
            if (iterable[j] < iterable[j-1]) swap(iterable[j], iterable[j - 1]);
        }