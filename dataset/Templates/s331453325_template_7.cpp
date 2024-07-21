template<typename C>
  Int find(Int st,C &check){
    T acc=ti;
    return find(st,check,acc,1,0,n);
  }