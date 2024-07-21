template<typename T>
void print_array(T *A_, s32 size) {
  //printf("%d\n", size);
  if( size != 0 ) {
    for(int i = 0; i < size - 1; ++i) {
      printf("%d ", A_[i]);
    }