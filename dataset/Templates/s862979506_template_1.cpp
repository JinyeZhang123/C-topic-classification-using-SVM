template<class T, class S> T inline fDiv(T a, S b){
  T m;
  if(b < 0){
    a = -a;
    b = -b;
  }