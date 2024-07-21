template <typename head, typename... tail>
vo(head&& h, tail&&... t){out(h);out(move(t)...);}