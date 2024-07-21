template <typename head, typename... tail>
void out(head&& h, tail&&... t){out(h);out(move(t)...);}