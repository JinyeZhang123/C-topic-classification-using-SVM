template<typename Itr, typename Lt>
auto partition2(const Itr first, const Itr last, const Lt& lt){
  auto i=first;
  for(auto j=first; j!=last; ++j){
    if(!lt(*last, *j)){
      iter_swap(i, j);
      ++i;
    }