template<typename Itr>
size_t merge_sort(Itr first, Itr last, Itr result){
  if(last-first>1){
    auto mid=first+(last-first)/2;
    auto ret=0u;
    ret+=merge_sort(first, mid, result);
    ret+=merge_sort(mid, last, result);
    return ret+merge(first, mid, last, result);
  }