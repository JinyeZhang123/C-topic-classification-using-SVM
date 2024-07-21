template <typename head, typename... tail>
svo(head&& h, tail&&... t){out(h);out(move(t)...);}