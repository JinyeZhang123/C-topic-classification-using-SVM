template <class Head,class... Tail>
inline bool out(Head head,Tail... tail){ cout<<head<<' ';out(move(tail)...);return 0; }