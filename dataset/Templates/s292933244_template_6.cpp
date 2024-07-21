template <class Head, class... Tail> void dump_func(Head &&head, Tail &&... tail) {
  DUMPOUT << head;
  if (sizeof...(Tail) > 0) DUMPOUT << ", ";
  dump_func(std::move(tail)...);
}