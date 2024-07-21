template<typename Itr, typename Lt>
void quick_sort2(const Itr first, const Itr last, const Lt& lt){
  if(first<last){
    auto mid=partition2(first, last, lt);
    quick_sort2(first, mid-1, lt);
    quick_sort2(mid+1, last, lt);
  }