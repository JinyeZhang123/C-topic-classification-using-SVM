template<typename Itr>
auto partition2(const Itr first, const Itr last){
  auto i=first;
  for(auto j=first; j!=last; ++j){
    if(*j<=*last){
      iter_swap(i, j);
      ++i;
    }