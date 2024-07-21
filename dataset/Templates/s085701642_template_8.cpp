template<typename S,typename T,typename U>
auto&operator<<(ostream&o,TRI<S,T,U>&t){return o<<"{"<<t.fi<<","<<t.se<<","<<t.th<<"}