template <class T>
void print_array(T* xs, int n){
    for(int i = 0; i < n; ++i){
        if(i){
            printf(" %d", xs[i]);
        }