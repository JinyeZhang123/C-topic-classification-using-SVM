template<typename C>
  Int find(Int st,C &check,T &acc,Int k,Int l,Int r){
    if(l+1==r){
      acc=f(acc,dat[k]);
      return check(acc)?k-n:-1;
    }