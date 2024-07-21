template <class Head,class Seco,class... Tail>
void VT3(Head&& head,Seco&& seco,Tail&&... tail){
  seco[head]=IN();
  VT3(head,move(tail)...);
}