template<typename Itr>
auto merge(Itr first1, const Itr last1, Itr first2, const Itr last2, Itr result){
  Itr cpyresult=result;
  size_t ret=0;
  for(Itr cpyfirst1=first1;; ++cpyresult){
    if(cpyfirst1==last1){
      //
      for(; first2!=last2; ++first2,++cpyresult) *cpyresult=*first2;
      break;
    }