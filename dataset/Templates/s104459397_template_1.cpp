template<typename T>
T partition(T ar[], int p, int r){
    T pivot = ar[r];
    int i = p - 1;
    for (int j = p; j <= r - 1; j++) {
        if(ar[j] <= pivot){
            i++;
            swap(ar[i], ar[j]);
        }