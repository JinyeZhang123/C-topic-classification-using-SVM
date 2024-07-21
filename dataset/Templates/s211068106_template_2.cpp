template<typename Itr>
size_t mergeSort(Itr first, Itr last, Itr result){
  if(last-first>1){
    Itr mid=first+(last-first)/2;
    size_t ret=0;
    ret+=mergeSort(first, mid, result);
    ret+=mergeSort(mid, last, result);
    return ret+merge(first, mid, mid, last, result);
  }