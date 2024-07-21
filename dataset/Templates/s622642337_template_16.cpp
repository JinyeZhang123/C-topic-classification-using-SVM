template <class Head, class... Tail>
void dump(Head head, Tail... tail)
{
    cerr << to_string(head) << " ";
    dump(tail...);
}