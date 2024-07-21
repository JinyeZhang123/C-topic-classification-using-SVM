template <class Head,class... Tail>
inline void in(Head&& head,Tail&&... tail){ cin>>head;in(move(tail)...); }