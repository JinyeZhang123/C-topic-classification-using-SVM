template<class ...Ts>
ostream& operator<<(ostream &os, const tuple<Ts...> &t){
   os<<"(";
   out<0,tuple<Ts...>,Ts...>(os,t);
   os<<")";
   return os;
}