template <class Head, class... Tail>
void dump(Head &&head, Tail &&... tail) {
    cerr << head << (sizeof...(Tail) == 0 ? " " : ", ");
    dump(std::move(tail)...);
}