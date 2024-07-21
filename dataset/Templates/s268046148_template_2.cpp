template<typename Itr>
auto merge(const Itr first, const Itr mid, const Itr last, const Itr result){
  auto ret=0u;
  auto out=result;
  for(auto in1=first,in2=mid; ; ++out,++ret){
    if(in1==mid){
      ret+=last-in2;
      for(; in2!=last; ++in2,++out) *out=*in2;
      break;
    }