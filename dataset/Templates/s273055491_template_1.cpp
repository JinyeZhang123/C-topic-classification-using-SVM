template <class Head,class... Tail>
void CINT(Head&& head,Tail&&... tail){
    cin>>head;
    CINT(move(tail)...);
}