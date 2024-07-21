template<typename CONTAINER>
void selection_sort(CONTAINER & iterable){
    int N = iterable.size();
    for (int i = 0; i != N; ++i){
        int mini = i;
        for (int j = i; j != N; ++j){
            if (iterable[j] < iterable[mini]) mini = j;
        }