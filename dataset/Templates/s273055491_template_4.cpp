template <class Head,class Seco,class... Tail>
void VT(Head&& head,Seco&& seco,Tail&&... tail){
    seco.resize(head);
    VT(head,move(tail)...);
}