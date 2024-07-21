template<class T>
void quickSort(T &A, int first, int last){
    if(last-first<2) return;
    const int bound = partition(A,first,last);
    quickSort(A,first,bound);
    quickSort(A,bound,last);
}