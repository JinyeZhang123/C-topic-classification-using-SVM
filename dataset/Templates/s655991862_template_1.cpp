template<class T>
int partition(T &A, int first, int last){
    const int pivot = A[last-1].second;
    int bound = first-1;
    for(int i=first;i<last;++i)
        if(A[i].second<=pivot) std::swap(A[++bound], A[i]);
    return bound;
}