template <typename... Args> void debug(Args&... args) {
  for(auto const& x : {args...}