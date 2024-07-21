template <class Head,class... Tail>
void VT2(Head&& head,Tail&&... tail){
  VECCIN(head);
  VT2(move(tail)...);
}